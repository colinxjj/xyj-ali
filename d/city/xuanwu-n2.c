// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
//changan city

inherit ROOM;

void create ()
{
        set ("short", "玄武大街");
        set ("long", @LONG

这里的路相当的宽，能容好几匹马车并行，长长的道路通向北方。远
远的能看到皇宫的朝阳门。西面传来阵阵丝竹声和欢笑声，那里就是
天下闻名的“长安乐坊”。东边是城中的一座武馆。
LONG);

        //set("item_desc", ([" *** " : " *** ", ]));

        set("exits", 
        ([ //sizeof() == 4
     "south" : __DIR__"xuanwu-n1",
                "north" : __DIR__"xuanwu-n3",
                "west" : __DIR__"club",
                "east" : __DIR__"wuguan",
        ]));

        set("objects", 
        ([ //sizeof() == 1
        ]));


        set("outdoors", "changan");
   set("no_clean_up", 0);
        setup();
   replace_program(ROOM);
}

