//sgzl

inherit NPC;
#include <ansi.h>

void create()
{
  set_name("��������",({"star liz","liz","star"}));
  set("gender", "Ů��");
  set("title", "β���ǹ�");
  set("age", 29);
  set("long", "    \n������Ϊ��ؽԿգ������Իã�\n����������Ϥ����֮�����������������֮𲶾��\n��Ѱ����֮�ȣ�����Ѩ֮�ң���ʯΪ�ţ���éΪϯ�����ľ��ǡ�\n��Ը���ԣ�����\n");

  set("attitude", "heroism");
  set("class", "xian");
  set("combat_exp", 1224175);
  set("kee", 936);
  set("max_kee", 936);
  set("sen", 1895);
  set("max_sen", 1895);
  set("force", 3107);
  set("max_force", 1554);
  set("mana", 6779);
  set("max_mana", 3390);
  set("force_factor", 123);
  set("mana_factor", 170);
  set("str", 15);
  set("per", 13);
  set("inquiry", ([
      "name" : "�����������塣",
]));

setup();
carry_object("/obj/loginload/skirt.c")->wear();
carry_object("/obj/loginload/shoes.c")->wear();
carry_object(__DIR__"obj/sword")->wield();
carry_object(__DIR__"obj/armor")->wear();
carry_object(__DIR__"obj/pifeng")->wear();
}

void init()
{
  object me=this_object();
  object my_weapon,my_armor1,my_armor2;
  string weapon_id="sword";
  string armor1_id="armor",armor2_id="pifeng";
  ::init();
  if (my_weapon=present(weapon_id, me))
       my_weapon->set("name",HIY"��ˮ"NOR);
  if (my_armor1=present(armor1_id, me))
       my_armor1->set("name",HIY"���"NOR);
  if (my_armor2=present(armor2_id, me))
       my_armor2->set("name",HIY"����"NOR);
}
