// Created by waiwai@2001/05/13

#include <ansi.h>

inherit SSERVER;

int cast(object me, object target)
{
	string msg;
	int  skill;
	skill=me->query_skill("sword",1);

	if(!wizardp(me) && userp(me)) {
	if(!skill||skill<40)
	return notify_fail("基本剑法太低！\n");

       if (userp(me) && !me->query("vip") )
          return notify_fail(HIW"VIP会员专用，你无权使用！\n"NOR);

	if((int)me->query("family/family_faith") < 100 )
		return notify_fail("你的门忠不够！\n");

	if((int)me->query_skill("moonshentong", 1) < 50)
        	return notify_fail("你的月宫仙法不够！\n");

//	if( (string)me->query("occupation") != "fighter" || (string)me->query("zhongzu") != "man" )
//      return notify_fail("你并非人族武士，无法使用这把刀。\n");
	}

	if(me->query_temp("execration"))
		return notify_fail("你正在念咒。\n");

	if(me->query_temp("weapon"))
		return notify_fail("你手上已经有武器了。\n");

	if((int)me->query("mana") < 100 )
		return notify_fail("你的法力不够！\n");

	if((int)me->query("sen") < 50 )
	return notify_fail("你的精神没有办法有效集中！\n");
        me->add("mana", -100);
	me->receive_damage("sen", 50);
	msg=HIC"$N念念有词：凭着武士的力量,光明遍照天下，无有黑夜，无有不照。\n"NOR;
	message_vision(msg,me);
	me->set_temp("execration",1);
	call_out("do_execration",2,me,skill);
	return 1;
}

int do_execration(object me,int skill)
{
	string msg;
	object sword;

	me->delete_temp("execration");

	if(me->query_temp("weapon")) {
	    tell_object(me,"你已经有武器了。终止施法\n");
	    return 1;
	}

	sword=new("/daemon/class/obj/magicsword");

	if(!sword) {
	    tell_object(me,"/daemon/class/obj/magicsword.c文件出错。\n");
	    return 1;
	}

        msg=HIW"只见四道似火非火，似光非光的强光，由东南西北方的地面，闪电般\n"
            "延伸过来，集结在$N的手上，竟形成了一把剑状物体----"HIR"光之剑 \n"NOR;

	message_vision(msg,me);
	sword->move(me);
	sword->wield();
	sword->do_dest(me,skill*2);
	if(skill>=500) skill=500;
       sword->set("weapon_prop/damage",skill/3);
	me->set_temp("apply/damage",skill/3);
	return 1;
}

