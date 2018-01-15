//sgzl

inherit NPC;

void create()
{
    set_name("电母",({"dian mu","dian shen","mu"}));
    set("gender", "女性");
    set("age", 45);
    set("long", "    \n一端庄秀雅的天神，在天宫中负责闪电。\n");

    set("attitude", "heroism");
    set("class", "xian");

    set("combat_exp", 70000);

    set("kee", 700);
    set("max_kee", 700);
    set("sen", 750);
    set("max_sen", 750);
    set("force", 900);
    set("max_force", 900);
    set("mana", 1100);
    set("max_mana", 1100);
    set("force_factor", 30);
    set("mana_factor", 30);
    set("per", 17);

    set_skill("dodge", 80);
    set_skill("cloud-steps", 80);
    set_skill("unarmed", 70);
    set_skill("puti-zhi", 100);
    set_skill("spells", 90);
    set_skill("parry", 140);

    map_skill("dodge", "cloud-steps");
    map_skill("unarmed", "puti-zhi");
    set("inquiry", ([
        "闪电"   : "没到时候。",
        "name"   : "我是电神。",
        "here"   : "这里就是天宫。",
    ]));

    setup();

carry_object("/obj/loginload/skirt.c")->wear();
carry_object("/obj/loginload/shoes.c")->wear();
carry_object("/d/sky/obj/dianlingfu");
}
