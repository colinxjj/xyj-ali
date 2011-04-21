// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
#include <ansi.h>

inherit F_SSERVER;

int perform(object me, object target)
{
    object weapon;
    int i;

    if (!target) target = offensive_target(me);

    if (!target
    ||  !target->is_character()
    ||  target->is_corpse()
    ||  target==me)
        return notify_fail("你要以谁施展这一招「混天一破」?\n");

    if (!me->is_fighting())
        return notify_fail("「混天一破」只能在战斗中才能使用!\n");

    if ((int)me->query("max_force") < 1200)
        return notify_fail("你的内力不够！\n");
    if ((int)me->query("force") < 500)
        return notify_fail("你的内力不足！\n");
    if ((int)me->query_skill("huntian-hammer",1) < 80)
        return notify_fail("你的混天锤等级还不足以施展混沌一破!!\n");
    if ((int)me->query_skill("dragonforce",1) < 80)
        return notify_fail("你的龙神心法还不够纯熟!!\n");

    i = me->query_skill("huntian-hammer",1)/3;
        
    me->delete("env/brief_message");
    target->delete("env/brief_message");

    me->set_temp("HTH_perform", 6);
    me->add_temp("apply/attack",i);
    COMBAT_D->do_attack(me, target, me->query_temp("weapon"));
    me->add_temp("apply/attack",-i);
        
    me->delete_temp("HTH_perform");

    me->add("force", -200);

    if (!target->is_fighting(me)) {
        if (living(target)) {
            if (userp(target)) target->fight_ob(me);
            else target->kill_ob(me);
        }
    }

    me->start_busy(2+random(1));
    return 1;
}

