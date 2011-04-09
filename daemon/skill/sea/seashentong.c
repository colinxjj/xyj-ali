// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// seashentong.c 【碧海神通】
inherit SKILL;

int valid_enable(string usage) { return usage=="spells"; }

int valid_learn(object me)
{
    if (me->query("class") != "dragon")
        return notify_fail("你非龙族怎能学碧海神通？\n");
    if ((int)me->query_skill("spells", 1) < 10
    || (int)me->query_skill("spells", 1) <=
            (int)me->query_skill("seashentong", 1))
        return notify_fail("你的法术修为还不够高深，无法学习碧海神通。\n");
    return 1;
}

string cast_spell_file(string spell)
{
    return CLASS_D("dragon") + "/seashentong/" + spell;
}

int help(object me)
{
    write(@HELP
【碧海神通】
碧海神通为龙族专属法术，非龙族不能习练。

①  龙神护法：    cast hufa
②  雪舞风灵：    cast freez
HELP);
    return 1;
}
