// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 
// create by snowcat.c 4/20/1997
// room: /d/eastway/xyt1.c

inherit ROOM;

void create ()
{
  set ("short", "小雁塔内");
  set ("long", @LONG

塔内气氛静而神秘，光线有些昏暗朦胧。四周墙壁上有数
盏龛灯，周围绘有彩色壁画。塔内有楼梯供人上下，从龛
形门窗可以纵目远眺。

LONG);

  set("exits", ([
        "out"     : __DIR__"xyt",
        "up"      : __DIR__"xyt2",
      ]));

  setup();
}






