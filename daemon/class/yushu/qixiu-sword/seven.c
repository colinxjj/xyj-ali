//Cracked by Roath
#include <ansi.h>
#include <combat.h>

inherit F_SSERVER;

int perform(object me, object target)
{
    string msg;
    int extra,i,lmt;
    object weapon;

    if (!target) target = offensive_target(me);
    if (!target
    ||  !target->is_character()
    ||  !me->is_fighting(target) )
        return notify_fail("�۶����߽���ֻ�ܶ�ս���еĶ���ʹ�á�\n");
    extra = me->query_skill("qixiu-sword", 1);
    if (extra < 80) return notify_fail("���[���޽�]���������죡\n");
    extra = me->query_skill("huntian-force", 1);
    if (extra < 80) return notify_fail("���[��������]���������죬�޷��������޽���������\n");
    if (me->query("family/family_name")!="�ݿ�ɽ�޵׶�")
        return notify_fail("ֻ���޵׶����ӣ�����ʹ�ö����߽���\n");

    weapon = me->query_temp("weapon");
    msg = YEL "$N���Դ󷢣����е�"+ weapon->name()+ "��籩������$nϮ����" NOR;
    message_vision(msg, me, target);
    me->add_temp("apply/attack", extra/10);
    me->add_temp("apply/damage", extra/10);
    lmt = random(5)+3;
    for(i=1; i<=lmt; i++)
    {
        COMBAT_D->do_attack(me, target, me->query_temp("weapon"), TYPE_REGULAR, msg);
    }
    me->add_temp("apply/attack", -extra/10);
    me->add_temp("apply/damage", -extra/10);
    me->start_busy(2);
    return 1;
}