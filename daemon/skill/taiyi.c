// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// taiyi.c ��̫���ɷ���
inherit SKILL;

int valid_enable(string usage) { return usage=="spells"; }

int valid_learn(object me)
{
    if ((int)me->query_skill("spells", 1) < 10 
    ||  (int)me->query_skill("spells", 1) <= (int)me->query_skill("taiyi", 1))
        return notify_fail("��ķ�����Ϊ����������޷�ѧϰ̫���ɷ���\n");
    return 1;
}

string cast_spell_file(string spell)
{
    return CLASS_D("xian") + "/taiyi/" + spell;
}

int help(object me)
{
    write(@HELP
��̫���ɷ���
̫���ɷ�������Ԫ������һȺ���ѹ������ɣ����������������㡣

��Ӧ�÷��š�
�� ����    exert heal
HELP);
    return 1;
}