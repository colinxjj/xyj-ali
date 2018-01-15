// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// created by mes, updated 6-17-97 pickle

inherit ROOM;
void create ()
{
  set ("short", "龙穴");
  set ("long", @LONG

挤过石缝一瞧，乖乖不得了。这里原来是条井龙的巢穴。虽然这里没
有水，但潮湿无比。四处爬着各种各样你从未见过的虫子，角落里一
堆骸骨发散着阵阵腐臭之气。
LONG);

  set("exits", ([ /* sizeof() == 1 */
  "west" : __DIR__"well",
]));
  set("outdoors", 0);
  set("objects", ([ /* sizeof() == 1 */
  __DIR__"npc/dragon" : 1,
]));

  setup();
}

int valid_leave(object me, string dir)
{
  if(dir=="west" &&
     objectp(present("dragon", environment(me))))
    return notify_fail("恶龙挡住了你的去路！\n");
  return ::valid_leave(me, dir);
}

int clean_up()
{
  return 0;
}


   
