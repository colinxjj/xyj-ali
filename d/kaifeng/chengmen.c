// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// create by snowcat jan 21 1998

inherit ROOM;

void create ()
{
    set ("short", "开封城门");
    set ("long", @LONG

一座高高的青垒石墙城楼耸立，城门上旌旗招展。城下是一条宽宽的
大道从门洞里穿过，往东就是城里，大道西边通向远方。门两边站立
着一些兵士，警察地护卫着开封城。

LONG);

    set("exits", ([
            "west" : "/d/eastway/east5",
            "east" : __DIR__"chen1",
    ]));
    
    set("objects", ([
            "/d/city/npc/wujiang" : 1,
            "/d/city/npc/bing" : 3,
    ]));
    set("outdoors", __DIR__);
    
    setup();
}


