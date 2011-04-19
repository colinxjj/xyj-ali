// 神话世界·西游记·版本４．５０
/* <SecCrypt CPL V3R05> */
 

inherit NPC;
inherit F_MASTER;

void create()
{
        set_name("广筠子", ({"guang yunzi", "guang"}));
        set("gender", "男性" );
        set("age", 43);
        set("long", "方寸山三星洞第二代弟子中的杰出人物．\n");
        set("combat_exp", 250000);
        set("attitude", "friendly");
        create_family("方寸山三星洞", 2, "弟子");
   set("int", 25);
   set("class", "taoist");

        set("eff_dx", 90000);
        set("nkgain", 300);

        set_skill("unarmed", 80);
        set_skill("dodge", 80);
        set_skill("parry", 80);
        set_skill("spells", 80);  
        set_skill("tao", 80);
        set_skill("literate", 70);
        set_skill("stick", 80);  
        set_skill("qianjun-bang", 80);
        set_skill("puti-zhi", 80);  
        set_skill("cloud-steps", 80);
        set_skill("dodge", 80);
        set_skill("force", 80);   
        set_skill("azoth", 80);

        map_skill("spells", "tao");
        map_skill("unarmed", "puti-zhi");
        map_skill("force", "azoth");
        map_skill("stick", "qianjun-bang");
        map_skill("parry", "qianjun-bang");
        map_skill("dodge", "cloud-steps");


        set("per", 30);
   set("str", 25);
        set("max_kee", 800);
        set("max_gin", 800);
        set("max_sen", 800);
        set("force", 450);
        set("max_force", 300);
        set("force_factor", 40);
        set("mana", 450);
        set("max_mana", 300);
   set("mana_factor", 20);
        setup();
   carry_object("/d/lingtai/obj/daoguan")->wear();
        carry_object("/d/lingtai/obj/cloth")->wear();
        carry_object("/d/lingtai/obj/bang")->wield();
}
void attempt_apprentice(object ob)
{
   if ( ((int)ob->query("combat_exp") < 10000)) {
   command("say " + RANK_D->query_respect(ob) +
"是否还应在道德及武功方面多下努力，来日方长吗！");
   return;
   }
        command("say 很好，" + RANK_D->query_respect(ob) +
"多加努力，他日必定有成。\n");
        command("recruit " + ob->query("id") );
}
int recruit_apprentice(object ob)
{
        if( ::recruit_apprentice(ob) )
                ob->set("class", "taoist");
}

