// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// whisper.c

#include <ansi.h>

inherit F_CLEAN_UP;

int main(object me, string arg)
{
   string dest, msg;
   object ob;

        if(!"/adm/daemons/tempd"->block_tell(me)) return 1;

   if( !arg || sscanf(arg, "%s %s", dest, msg)!=2 )
     return notify_fail("你要对谁耳语些什么？\n");

   ob = present(dest, environment(me));
   if( !ob || !ob->is_character() )
     return notify_fail("你要对谁耳语？\n");

   write( GRN "你在" + ob->name() + "的耳边悄声说道：" + msg + "\n" NOR);
   tell_room( environment(me), me->name() + "在" + ob->name()
     + "耳边小声地说了些话。\n", ({ me, ob }) );
   if( !userp(ob) ) ob->relay_whisper(me, msg);
   else
     tell_object( ob, GRN + me->name() + "在你的耳边悄声说道：" + msg + "\n" NOR);
   return 1;
}

int help(object me)
{
   write( @TEXT
指令格式：whisper <某人> <讯息>

这个指令可以用来和同一房间中的人耳语，包括 NPC 在内。
TEXT
   );
   return 1;
}
