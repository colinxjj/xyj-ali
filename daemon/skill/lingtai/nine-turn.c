// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// nine-turn.c
inherit FORCE;

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
    string mark;
    if (!stringp(mark = me->query("marks/nine-turn"))) {
        if (random(me->query_kar()) > 20)
            mark = "true";
        else
            mark = "false";
        me->set("marks/nine-turn", mark);
    }
    if (mark == "true") return 1;
    else return notify_fail("��ϰ��ת��������Ե�֣����������Ե���������˰ɡ�\n");
}

int practice_skill(object me)
{
    return notify_fail("��ת����ֻ����ѧ�ģ����Ǵ�����(exert)�����������ȡ�\n");
}
string exert_function_file(string func)
{
    return CLASS_D("puti") + "/nine-turn/" + func;
}

int help(object me)
{
    write(@HELP
����ת������
��ת�������������һ�����������֮�컯�������������������
���أ���˵�����������棬��˵����̫���Ͼ�������˵������������
��ʦ������Ī��һ�ǡ�
��ϰ��������Ե�֣�������Ե�����޵á�

��Ӧ�÷��š�
�� ����          exert heal
�� ��ʮ����      exert seven-two(δʵ��)
HELP);
    return 1;
}