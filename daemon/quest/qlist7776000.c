#include <ansi.h>
inherit SKILL;
mapping *quest = ({
        ([      "quest":                "����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�Ż�����",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��ӥ",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "Բ���䵶",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "���۹�",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "���۹�",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "������",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "������",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�ײ���",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�ڲ���",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�ϰ߾���",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "Сʯ��",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��������",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��÷����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��������",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "���",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�ػ�����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�ֹ�����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��������",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��Ŀ����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��ɫ����",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��߸��",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�������",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��ɳ����",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�˹���ʦ",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                HIY "�������" NOR,
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "�����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��Ӱ���",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "ˮĸ����",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��Ӱ���",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��Ӱ����",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "��Ӱ��ѥ",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "����Ѫ�ĺ���",
                "quest_type":           "Ѱ",
                "exp_bonus":            70,
        ]),
        ([      "quest":                "������",
                "quest_type":           "ɱ",
                "exp_bonus":            70,
        ]),

});
mapping query_quest()
{
        return quest[random(sizeof(quest))];
}

