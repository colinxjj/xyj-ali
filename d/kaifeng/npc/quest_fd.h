// �����硤���μǡ��汾��������
/* <SecCrypt CPL V3R05> */
 
// by snowcat jan 22 1998

#include <ansi.h>
#include <quest.h>

// the quest format is the following mapping:
// daoxing :     type     name     id            object         amount
//--------------------------------------------------------------------
//  1000   : ({ "find",  "����",   "mi ji" ,     "",             "1" }), 
//  5000   : ({ "give",  "����",   "zai min" ,   "����(silver)", "5" }), 
// 12000   : ({ "kill",  "�׹Ǿ�", "baigu jing", "",             "3" });
 
//��һ�����ţ��ȼ������������ӣ�����׹Ǿ�������������

mapping quests_food = ([
       5 : ({ "find", "������",       "huasheng",           "", "1" }),
      10 : ({ "find", "ը����",       "jitui",              "", "1" }),
      15 : ({ "find", "�𻨾ƴ�",     "jiudai",             "", "1" }),
      20 : ({ "find", "���չ���",     "gou rou",            "", "1" }),
      50 : ({ "find", "��̳��",       "tanzi",              "", "1" }),
      60 : ({ "find", "�ִž�ƿ",     "jiuping",            "", "1" }),
      70 : ({ "find", "���",         "cha hu",             "", "1" }),
      80 : ({ "find", "���",         "cha gan",            "", "1" }),
     100 : ({ "find", "�ز��ڰ���",   "sucai bao",          "", "1" }),
     110 : ({ "find", "�����ڰ���",   "zhurou bao",         "", "1" }),
     120 : ({ "find", "����ζ����",   "haixian bao",        "", "1" }),
     150 : ({ "find", "���ϰ�ҩ",     "yunnan baiyao",      "", "1" }),
     200 : ({ "find", "ˮ��",       "egg",                "", "1" }),
     210 : ({ "find", "�����",       "roubing",            "", "1" }),
     220 : ({ "find", "��Ƥ�����",   "jiunang",            "", "1" }),
     250 : ({ "find", "⨺��Ҹ�",     "mihou taogan",       "", "1" }),
     290 : ({ "find", "����ƴ�",     "jiudai",             "", "1" }),
     300 : ({ "find", "����",         "bao",                "", "1" }),
     310 : ({ "find", "���«",       "hulu",               "", "1" }),
     320 : ({ "find", "���ܲ�",       "carrot",             "", "1" }),
     330 : ({ "find", "����",         "beans",              "", "1" }),
     330 : ({ "find", "С�ײ�",       "xbc",                "", "1" }),
     400 : ({ "find", "ţƤ�ƴ�",     "jiudai",             "", "1" }),
     500 : ({ "find", "ѩ��",         "xue li",             "", "1" }),
     530 : ({ "find", "��ѩ����",   "guihua geng",        "", "1" }),
     550 : ({ "find", "ѩ��",         "xue lian",           "", "1" }),
     600 : ({ "find", "����",         "zongzi",             "", "1" }),
     700 : ({ "find", "����",         "chicken",            "", "1" }),
     710 : ({ "find", "���Ѹ�",       "putao gan",          "", "1" }),
     800 : ({ "find", "���׾�",       "mijiu",              "", "1" }),
     810 : ({ "find", "��",           "fan",                "", "1" }),
     820 : ({ "find", "���",         "nian gao",           "", "1" }),
     830 : ({ "find", "�ͺ�«",       "you hulu",           "", "1" }),
     840 : ({ "find", "��",           "yan",                "", "1" }),
    1010 : ({ "find", "������",     "cha gan",            "", "1" }),
    1020 : ({ "find", "����",         "gua zi",             "", "1" }),
    1030 : ({ "find", "������",       "huasheng mi",        "", "1" }),
    1040 : ({ "find", "�ؼ��",       "jian jiao",          "", "1" }),
    1050 : ({ "find", "����ˮ��",     "shui jiao",          "", "1" }),
    1060 : ({ "find", "��Ƭ",         "mian pian",          "", "1" }),
    1070 : ({ "find", "����",         "mian tang",          "", "1" }),
    1080 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1090 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1100 : ({ "find", "ϸ��",         "mian tiao",          "", "1" }),
    1110 : ({ "find", "��˿��",       "mian tiao",          "", "1" }),
    1120 : ({ "find", "��˿��",       "mian tiao",          "", "1" }),
    1130 : ({ "find", "ţ��˿��",     "mian tiao",          "", "1" }),
    1140 : ({ "find", "�ǽ���",       "mian tiao",          "", "1" }),
    1150 : ({ "find", "±ζ��",       "mian tiao",          "", "1" }),
    1160 : ({ "find", "�Ź���",       "mian tiao",          "", "1" }),
    1170 : ({ "find", "��˿��",       "mian tiao",          "", "1" }),
    1180 : ({ "find", "��������",     "mian tiao",          "", "1" }),
    1190 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1200 : ({ "find", "�����",       "mian tiao",          "", "1" }),
    1210 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1220 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1230 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1240 : ({ "find", "������",       "mian tiao",          "", "1" }),
    1250 : ({ "find", "�ϼ�������",   "mian tiao",          "", "1" }),
    1300 : ({ "find", "Ѭ����",       "xun lachang",        "", "1" }),
    1310 : ({ "find", "���Ӽ�",       "zui ziji",           "", "1" }),
    1320 : ({ "find", "�廨����",     "wuhua menrou",       "", "1" }),
    1330 : ({ "find", "��˿Ѭ��",     "qingsi xunyu",       "", "1" }),
    1340 : ({ "find", "�Ǵ��Ź�",     "tangcu paigu",       "", "1" }),
    1350 : ({ "find", "������˿",     "jingjiang rousi",    "", "1" }),
    1360 : ({ "find", "������Ϻ",     "youqiang daxia",     "", "1" }),
    1370 : ({ "find", "��Ƥ��Ѽ",     "cuipi kaoya",        "", "1" }),
    1380 : ({ "find", "�����ض�",     "hongshao sue",       "", "1" }),
    1390 : ({ "find", "��������",     "gongbao jiding",     "", "1" }),
    1400 : ({ "find", "������˿",     "mala dusi",          "", "1" }),
    1410 : ({ "find", "���ͷ�Ƭ",     "hongyou feipian",    "", "1" }),
    1420 : ({ "find", "��������",     "nenqiang zhugan",    "", "1" }),
    1430 : ({ "find", "���ʹ೦",     "zouyou cuichang",    "", "1" }),
    1440 : ({ "find", "��������",     "baochao yaohua",     "", "1" }),
    1450 : ({ "find", "ϸ��ͷ��",     "xipa tourou",        "", "1" }),
    1460 : ({ "find", "���㶬��",     "shexiang dongsun",   "", "1" }),
    1470 : ({ "find", "��䶹��",     "feicui doufu",       "", "1" }),
    1480 : ({ "find", "���ʸ���",     "sanxian fuzhu",      "", "1" }),
    1490 : ({ "find", "ʱ���߲�",     "shuxian shucai",     "", "1" }),
    1500 : ({ "find", "Ƥ��������",   "pidan shourouzhou",  "", "1" }),
    1510 : ({ "find", "�������ϸ�",   "huotui zhushenggeng","", "1" }),
    1600 : ({ "find", "��յ",         "cha zhan",           "", "1" }),
    1610 : ({ "find", "�嶹��",       "jian doufu",         "", "1" }),
    1620 : ({ "find", "�����",       "shao mianjin",       "", "1" }),
    2000 : ({ "find", "Ѭ��ͷ",       "yang tou",           "", "1" }),
    2010 : ({ "find", "��������",     "pao mo",             "", "1" }),
    2020 : ({ "find", "��������",     "za sui",             "", "1" }),
    3010 : ({ "find", "���ܹ�",       "hami gua",           "", "1" }),
    3020 : ({ "find", "��ݮ",         "cao mei",            "", "1" }),
    3030 : ({ "find", "ƻ��",         "ping guo",           "", "1" }),
    3040 : ({ "find", "ˮ������",     "pu tao",             "", "1" }),
    3100 : ({ "find", "��ζ�ն�",     "wuwei shaoe",        "", "1" }),
    3110 : ({ "find", "��֭��Ѽ",     "xiangzhi zhengya",   "", "1" }),
    3120 : ({ "find", "��ζţ��",     "lawei niutang",      "", "1" }),
    3130 : ({ "find", "ţ������",     "niurou tangmian",    "", "1" }),
    4010 : ({ "find", "����",         "zheng su",           "", "1" }),
    4010 : ({ "find", "�����",       "roujia mo",          "", "1" }),
    4020 : ({ "find", "���׷�",       "caomi fan",          "", "1" }),
    4030 : ({ "find", "��ţ��",       "jiang niurou"        "", "1" }),
    4040 : ({ "find", "�˿�����",     "caikang tuanzi"      "", "1" }),
    4050 : ({ "find", "�ƺ�",         "jiuhu"               "", "1" }),
    4060 : ({ "find", "����",         "gong guo"            "", "1" }),
    4070 : ({ "find", "С����",       "gong guo"            "", "1" }),
    4080 : ({ "find", "�˿�����",     "caikang tuanzi"      "", "1" }),
    4100 : ({ "find", "������",       "zui niluo",          "", "1" }),
    4200 : ({ "find", "Ѭ��",         "xun yu",             "", "1" }),
    4300 : ({ "find", "���з",       "zheng pangxie",      "", "1" }),
    4400 : ({ "find", "����Ϻ",       "shao longxia",       "", "1" }),
    5010 : ({ "find", "С���",       "xqc",                "", "1" }),
    5020 : ({ "find", "��ƹ�",       "dhg",                "", "1" }),
    5100 : ({ "find", "��ȫ��",       "kao quanyang",       "", "1" }),
    5110 : ({ "find", "������",       "kao ruzhu",          "", "1" }),
    6010 : ({ "find", "��������",     "qiongyao",           "", "1" }),
    6020 : ({ "find", "��ը����",     "hua sheng",          "", "1" }),
    6030 : ({ "find", "������",       "hua sheng",          "", "1" }),
    6040 : ({ "find", "����",       "hua sheng",          "", "1" }),
    6050 : ({ "find", "���㻨��",     "hua sheng",          "", "1" }),
    6060 : ({ "find", "�滨��",       "hua sheng",          "", "1" }),
    6070 : ({ "find", "±����",       "hua sheng",          "", "1" }),
    6080 : ({ "find", "��ˮ����",     "hua sheng",          "", "1" }),
    6090 : ({ "find", "ϸ�ǻ���",     "hua sheng",          "", "1" }),
    6100 : ({ "find", "��ը��",       "youzha ji",          "", "1" }),
    6110 : ({ "find", "�Ͷ���",       "you doufu",          "", "1" }),
    6120 : ({ "find", "�����",       "you mianjin",        "", "1" }),
    6130 : ({ "find", "�͸�",         "you gao",            "", "1" }),
    6140 : ({ "find", "�ͱ�",         "you bing",           "", "1" }),
    7010 : ({ "find", "����",         "xiangsu",            "", "1" }),
    7020 : ({ "find", "�Ǹ�",         "tanggao",            "", "1" }),
    7030 : ({ "find", "��ʳ",         "youshi",             "", "1" }),
    7040 : ({ "find", "������",       "yangtui",            "", "1" }),
    8010 : ({ "find", "��ի��",       "zhai guo",           "", "1" }),
    8020 : ({ "find", "��ի��",       "zhai guo",           "", "1" }),
    8030 : ({ "find", "��ի��",       "zhai guo",           "", "1" }),
    8040 : ({ "find", "��ի��",       "zhai guo",           "", "1" }),
    8050 : ({ "find", "��ի��",       "zhai guo",           "", "1" }),
    9000 : ({ "find", "�ִɲ���",     "cuci chawan",        "", "1" }),
    9010 : ({ "find", "С��",         "xiao cai",           "", "1" }),
    9020 : ({ "find", "ϡ��",         "xi fan",             "", "1" }),
    9100 : ({ "find", "���㳴��",     "chao dou",           "", "1" }),
    9110 : ({ "find", "�����",       "gua zi",             "", "1" }),
    9120 : ({ "find", "±ζ��",       "luwei gan",          "", "1" }),
    9130 : ({ "find", "���ͳ���",     "chou gan",           "", "1" }),
    9140 : ({ "find", "��ը��",       "youzha gan",         "", "1" }),
    9150 : ({ "find", "��ζ������",   "doufu geng",         "", "1" }),
    9160 : ({ "find", "С����" ,      "dan gao",            "", "1" }),
    9170 : ({ "find", "С����" ,      "jian su",            "", "1" }),
    9200 : ({ "find", "������" ,      "bailan gua",         "", "1" }),
    9210 : ({ "find", "��ľ��" ,      "fanmu gua",          "", "1" }),
    9220 : ({ "find", "ľ��" ,        "mu gua",             "", "1" }),
    9230 : ({ "find", "����" ,        "gan zi",             "", "1" }),
    9240 : ({ "find", "����" ,        "ju zi",              "", "1" }),
    9250 : ({ "find", "����" ,        "you zi",             "", "1" }),
    9260 : ({ "find", "��ѿ" ,        "dou ya",             "", "1" }),
    9270 : ({ "find", "����" ,        "hua cai",            "", "1" }),
    9280 : ({ "find", "ҰĢ��" ,      "mo gu",              "", "1" }),
    9290 : ({ "find", "��ľ��" ,      "hei muer",           "", "1" }),
    9300 : ({ "find", "ɽ��",         "shan sun",           "", "1" }),
    9310 : ({ "find", "���Ȳ�",       "hong xiancai",       "", "1" }),
    9320 : ({ "find", "���",         "hong cha",           "", "1" }),
    9330 : ({ "find", "�̲�",         "lu cha",             "", "1" }),
    9340 : ({ "find", "ˮ�ƹ�",       "jiu guan",           "", "1" }),
    9350 : ({ "find", "����Ͼƺ�",   "jiu hu",             "", "1" }),
    9360 : ({ "find", "�ɾ���",       "jiu zhong",          "", "1" }),
   20010 : ({ "find", "�����",       "rou",                "", "1" }),
   20020 : ({ "find", "�������",     "rou",                "", "1" }),
   20030 : ({ "find", "��ͷ��",       "rou",                "", "1" }),
   20040 : ({ "find", "��������",     "rou",                "", "1" }),
   20050 : ({ "find", "���ظ���",     "rou",                "", "1" }),
   20060 : ({ "find", "��������",     "rou",                "", "1" }),
   30000 : ({ "find", "ѩ����",       "snowglass",          "", "1" }),
   30010 : ({ "find", "����ɽ���",   "food",               "", "1" }),
   30020 : ({ "find", "���յ�����",   "food",               "", "1" }),
   30030 : ({ "find", "����Ģ��",     "food",               "", "1" }),
   30040 : ({ "find", "Ұ���Ӹ�",     "food",               "", "1" }),
   30050 : ({ "find", "�����ӱ�",     "food",               "", "1" }),
   30060 : ({ "find", "�׹��ʴ���",   "food",               "", "1" }),
   40100 : ({ "find", "��������",     "mo mo",              "", "1" }),
   40200 : ({ "find", "��������",     "mo mo",              "", "1" }),
   40300 : ({ "find", "��������",     "mo mo",              "", "1" }),
   40400 : ({ "find", "��ɳ����",     "mo mo",              "", "1" }),
   40500 : ({ "find", "��ɳ����",     "mo mo",              "", "1" }),
   40600 : ({ "find", "��������",     "mo mo",              "", "1" }),
   40700 : ({ "find", "��������",     "mo mo",              "", "1" }),
   40800 : ({ "find", "�л�����",     "mo mo",              "", "1" }),
   40900 : ({ "find", "��������",     "mo mo",              "", "1" }),
   50000 : ({ "find", "⨺���",       "mihou tao",          "", "1" }),
  100000 : ({ "find", "��ƿ",         "jingping",           "", "1" }),
  200100 : ({ "find", "����",         "rou",                "", "1" }),
  200200 : ({ "find", "¹��",         "rou",                "", "1" }),
  200300 : ({ "find", "����",         "rou",                "", "1" }),
  200400 : ({ "find", "�շ�",         "rou",                "", "1" }),
  200500 : ({ "find", "����",         "rou",                "", "1" }),
  200600 : ({ "find", "¿��",         "rou",                "", "1" }),
  200700 : ({ "find", "�Ǹ�",         "rou",                "", "1" }),
  200800 : ({ "find", "����",         "rou",                "", "1" }),
  200900 : ({ "find", "����",         "rou",                "", "1" }),
  201000 : ({ "find", "ʨ��",         "rou",                "", "1" }),
  201100 : ({ "find", "����",         "rou",                "", "1" }),
  300100 : ({ "find", "�����",       "rou",                "", "1" }),
  300200 : ({ "find", "Ұ����",       "rou",                "", "1" }),
  300300 : ({ "find", "Ұ����",       "rou",                "", "1" }),
  300400 : ({ "find", "Ұ����",       "rou",                "", "1" }),
  300500 : ({ "find", "Ұ¹��",       "rou",                "", "1" }),
  300600 : ({ "find", "Ұ����",       "rou",                "", "1" }),
  300700 : ({ "find", "������",       "rou",                "", "1" }),
  300800 : ({ "find", "������",       "rou",                "", "1" }),
  300900 : ({ "find", "����",         "rou",                "", "1" }),
  301000 : ({ "find", "����",         "rou",                "", "1" }),
  301100 : ({ "find", "����",         "rou",                "", "1" }),
  301200 : ({ "find", "����",         "rou",                "", "1" }),
  301300 : ({ "find", "ʨ��",         "rou",                "", "1" }),
  400010 : ({ "find", "�׷�",         "mi fan",             "", "1" }),
  400020 : ({ "find", "���",         "mian jin",           "", "1" }),
  700010 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  700020 : ({ "find", "�������",     "rou",                "", "1" }),
  700030 : ({ "find", "�������",     "rou",                "", "1" }),
  700040 : ({ "find", "�ں����",     "rou",                "", "1" }),
  700050 : ({ "find", "�������",     "rou",                "", "1" }),
  700060 : ({ "find", "Ұ�����",     "rou",                "", "1" }),
  700070 : ({ "find", "Ұ¿���",     "rou",                "", "1" }),
  700080 : ({ "find", "Ұ¹���",     "rou",                "", "1" }),
  700090 : ({ "find", "�������",     "rou",                "", "1" }),
  700100 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  700110 : ({ "find", "��ѻ���",     "rou",                "", "1" }),
  700120 : ({ "find", "�������",     "rou",                "", "1" }),
  701010 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  701020 : ({ "find", "�������",     "rou",                "", "1" }),
  701030 : ({ "find", "�������",     "rou",                "", "1" }),
  701040 : ({ "find", "�ں����",     "rou",                "", "1" }),
  701050 : ({ "find", "�������",     "rou",                "", "1" }),
  701060 : ({ "find", "Ұ�����",     "rou",                "", "1" }),
  701070 : ({ "find", "Ұ¿���",     "rou",                "", "1" }),
  701080 : ({ "find", "Ұ¹���",     "rou",                "", "1" }),
  701090 : ({ "find", "�������",     "rou",                "", "1" }),
  701100 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  701110 : ({ "find", "��ѻ���",     "rou",                "", "1" }),
  701120 : ({ "find", "�������",     "rou",                "", "1" }),
  702010 : ({ "find", "ɽ������",     "rou",                "", "1" }),
  702020 : ({ "find", "��������",     "rou",                "", "1" }),
  702030 : ({ "find", "��������",     "rou",                "", "1" }),
  702040 : ({ "find", "�ں�����",     "rou",                "", "1" }),
  702050 : ({ "find", "��������",     "rou",                "", "1" }),
  702060 : ({ "find", "Ұ������",     "rou",                "", "1" }),
  702070 : ({ "find", "Ұ¿����",     "rou",                "", "1" }),
  702080 : ({ "find", "Ұ¹����",     "rou",                "", "1" }),
  702090 : ({ "find", "��������",     "rou",                "", "1" }),
  702100 : ({ "find", "ɽ������",     "rou",                "", "1" }),
  702110 : ({ "find", "��ѻ����",     "rou",                "", "1" }),
  702120 : ({ "find", "��������",     "rou",                "", "1" }),
  703010 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  703020 : ({ "find", "�������",     "rou",                "", "1" }),
  703030 : ({ "find", "�������",     "rou",                "", "1" }),
  703040 : ({ "find", "�ں����",     "rou",                "", "1" }),
  703050 : ({ "find", "�������",     "rou",                "", "1" }),
  703060 : ({ "find", "Ұ�����",     "rou",                "", "1" }),
  703070 : ({ "find", "Ұ¿���",     "rou",                "", "1" }),
  703080 : ({ "find", "Ұ¹���",     "rou",                "", "1" }),
  703090 : ({ "find", "�������",     "rou",                "", "1" }),
  703100 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  703110 : ({ "find", "��ѻ���",     "rou",                "", "1" }),
  703120 : ({ "find", "�������",     "rou",                "", "1" }),
  704010 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  704020 : ({ "find", "�������",     "rou",                "", "1" }),
  704030 : ({ "find", "�������",     "rou",                "", "1" }),
  704040 : ({ "find", "�ں����",     "rou",                "", "1" }),
  704050 : ({ "find", "�������",     "rou",                "", "1" }),
  704060 : ({ "find", "Ұ�����",     "rou",                "", "1" }),
  704070 : ({ "find", "Ұ¿���",     "rou",                "", "1" }),
  704080 : ({ "find", "Ұ¹���",     "rou",                "", "1" }),
  704090 : ({ "find", "�������",     "rou",                "", "1" }),
  704100 : ({ "find", "ɽ�����",     "rou",                "", "1" }),
  704110 : ({ "find", "��ѻ���",     "rou",                "", "1" }),
  704120 : ({ "find", "�������",     "rou",                "", "1" }),
  800010 : ({ "find", RED "����" NOR, "huo zao",            "", "1" }),
  800020 : ({ "find", HIW "��ź" NOR, "bi ou",              "", "1" }),
  800030 : ({ "find", YEL "����" NOR, "jiao li",            "", "1" }),
 1000010 : ({ "find", "����",         "qiong jiang",        "", "1" }),
 1000020 : ({ "find", "��Һ",         "yu ye",              "", "1" }),
 1000030 : ({ "find", "����",         "ti hu",              "", "1" }),
 1000040 : ({ "find", "��¶",         "yao lu",             "", "1" }),
 1000050 : ({ "find", "����",         "long gan",           "", "1" }),
 1000060 : ({ "find", "����",         "feng sui",           "", "1" }),
 1000070 : ({ "find", "����",         "xiong zhang",        "", "1" }),
 1000080 : ({ "find", "�ɴ�",         "xing chun",          "", "1" }),
 1500010 : ({ "find", HIG "�������ڵ�" NOR, "shelizi neidan",     "", "1" }),
 1500020 : ({ "find", "�ڼ���",       "wuji jing",          "", "1" }),
 2000010 : ({ "find", YEL "����" NOR, "xian tao",           "", "1" }),
 2000020 : ({ "find", YEL "�ɾ�" NOR, "xian jiu",           "", "1" }),
]);


