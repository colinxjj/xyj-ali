// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// tonsillit.c

inherit FORCE;

string name() { return "摄气诀"; }

int valid_enable(string usage) { return usage=="force"; }

int valid_learn(object me)
{
//remove shaqi require.2/15
/*
        if( (int)me->query("bellicosity") < (int)me->query_skill("tonsillit") * 40 )
                return notify_fail("你的杀气不够，无法领悟更高深的摄气诀。\n");
*/
    if ((int)me->query_skill("tonsillit", 1) >= 250)
        return notify_fail("你的气量有限，对摄气诀已领悟到了极限。\n");
    return 1;
}

string exert_function_file(string func)
{
    return CLASS_D("ghost") + "/tonsillit/" + func;
}
