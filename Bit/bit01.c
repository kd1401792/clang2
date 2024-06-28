#include<stdio.h>

enum BitState
{
	Base = 0,			//00000000 �ʏ���
	Poison = 1 << 0,	//00000001 �ŏ��
	Sleep = 1 << 1,		//00000010 ������
	Pralysis = 1 << 2,	//00000100 �}�q���
	Burn = 1 << 3,		//00001000 �₯�Ǐ��
	AtkUp = 1 << 4,		//00010000 �U���̓A�b�v���
	AtkDown = 1 << 5	//00100000 �U���̓_�E�����
};

typedef unsigned int UINT;
void DisplayStatus(UINT s);
void ChangeFlag(UINT* s);
void ClearFlag(UINT* s);

main()
{
	UINT MyState = Base;
	ChangeFlag(&MyState);
	DisplayStatus(MyState);
	ClearFlag(&MyState);
	DisplayStatus(MyState);
}

void DisplayStatus(UINT s)
{
	printf("****���݂̏��****\n");
	if (s & Poison)
	{
		printf("��\n");
	}
	if (s & Sleep)
	{
		printf("����\n");
	}
	if (s & Pralysis)
	{
		printf("���");
	}
	if (s & Burn)
	{
		printf("�Ώ�");
	}
	if (s & AtkUp)
	{
		printf("�U���̓A�b�v");
	}
	if (s & AtkDown)
	{
		printf("�U���̓_�E��");
	}
	printf("******************\n");
}

void ChangeFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃɂ��܂����H\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I�� >");
		scanf("%d", &a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s |= Poison;
			break;
		case 2:
			*s |= Sleep;
			break;
		case 3:
			*s |= Pralysis;
			break;
		case 4:
			*s |= Burn;
			break;
		case 5:
			*s |= AtkUp;
			break;
		case 6:
			*s |= AtkDown;
			break;
		default:	//1�`6�ɓ��Ă͂܂�Ȃ��Ƃ�
			break;
		}
	}
}

void ClearFlag(UINT* s)
{
	int a;
	while (1)
	{
		printf("�ǂ̏�Ԃ��������܂���?\n");
		printf("1:�� 2:���� 3:��� 4:�Ώ� 5:�U���� 6:�U���� 0:���͏I��>");
		scanf("%d",&a);
		if (a == 0)
		{
			break;
		}
		switch (a)
		{
		case 1:
			*s &= ~Poison;
			break;
		case 2:
			*s &= ~Sleep;
			break;
		case 3:
			*s &= ~Pralysis;
			break;
		case 4:
			*s &= ~Burn;
			break;
		case 5:
			*s &= ~AtkUp;
			break;
		case 6:
			*s &= ~AtkDown;
			break;
		case 7:	//���ׂẴt���O��OFF=������Ԃɂ���
			*s = Base;
			break;
		default:
			break;
		}
	}
}
