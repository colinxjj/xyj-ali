// Created by waiwai@2000/12/20
// Last modified by waiwai@2002/12/05

#include <ansi.h>
#include <skill.h>
#include <weapon.h>
#include <combat.h>

inherit SSERVER;
 
int perform(object me, object target)
{
        object weapon, ob;
        string msg;
        int extra,damage;
        if( !target ) target = offensive_target(me);
 
       if( !target
          || !target->is_character()
          || !me->is_fighting(target) )
                return notify_fail("「漫天飞雪」只能在战斗中使用。\n");

       if( !(ob = me->query_temp("weapon"))
        ||      (string)ob->query("skill_type") != "sword" )
                return notify_fail("使用「漫天飞雪」必须拿把剑！\n"); 

        if( (int)me->query("force") < 400 )
                return notify_fail("你的真气不够！\n");

        if( (int)me->query_skill("snowsword",1) < 60 )
                return notify_fail("你的风回雪舞剑法等级不够.\n");

        if( (int)me->query_skill("moonforce",1) < 60 )
                return notify_fail("你的圆月心法等级不够.\n");

 	if(me->is_busy())
             return notify_fail("你正忙着……\n");

         msg = HIY "$N使出月宫不传之密「漫天飞雪」，身行顿时急若风回，轻灵似雪舞……\n" NOR;

        message_vision(msg, me);

        extra=me->query_skill("snowsword",1);
       damage=extra*2+random((int)me->query_skill("dodge")*4);

	if( random(me->query("combat_exp")) > (int)target->query("combat_exp")/3) {

        me->add_temp("apply/damage",extra);
        me->add_temp("apply/attack",extra);

	// Added by waiwai@2002/05/27
	if( !me->query("vip") && target->query("vip") ) {
       target->receive_damage("kee",damage/2,me);
       target->receive_wound("kee",damage/4,me);
	} else {
       target->receive_damage("kee",damage,me);
       target->receive_wound("kee",damage/2,me);
	}

        COMBAT_D->do_attack(me, target, me->query_temp("weapon"), 0);
        COMBAT_D->do_attack(me, target, me->query_temp("weapon"), 0);
        me->add_temp("apply/attack",-extra);  
        me->add_temp("apply/damage",-extra);

        me->add("force", -200);
        me->start_busy(2+random(1));
	} else {
             message_vision(HIC"\n$n"HIC"一个鱼越，越出丈外，冷笑道：不过如此…… \n"NOR,me,target);
        me->add("force", -300);
        me->start_busy(3);
             }


        if( !target->is_fighting(me) ) {
                if( living(target) ) {
                        if( userp(target) ) target->kill_ob(me);
                        else target->kill_ob(me);
				}
			}

        return 1;
}


