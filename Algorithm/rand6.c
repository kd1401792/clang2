#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int a[3] = { 1,2,3 };
	int p,e;
	p = 0, e = 0;
	printf("�����o���܂���?\n(1:�O�[ 2:�`���L 3:�p�[)> ");
	scanf("%d", &p);
	printf("\n");

		if (p == a[0])
		{
			printf("�v���C���[�́A�O�[�ł��B\n");
		}
		if (p == a[1])
		{
			printf("�v���C���[�́A�`���L�ł��B\n");
		}
		if (p == a[2])
		{
			printf("�v���C���[�́A�p�[�ł��B\n");
		}

	srand(time(0));
	e = rand() % 3 + 1;
		if (e== a[0])
		{
			printf("�R���s���[�^�́A�O�[�ł��B\n");
		}
		if (e == a[1])
		{
			printf("�R���s���[�^�́A�`���L�ł��B\n");
		}
		if (e == a[2])
		{
			printf("�R���s���[�^�́A�p�[�ł��B\n");
		}
		printf("\n");

	if (p == a[0])
	{
		if (e == a[0])
		{
			printf("������");
		}
		if (e == a[1])
		{
			printf("�v���C���[�̏����ł�");
		}
		if (e == a[2])
		{
			printf("�v���C���[�̕����ł�");
		}
	}
	if (p == a[1])
	{
		if (e == a[0])
		{
			printf("�v���C���[�̕����ł�");
		}
		if (e == a[1])
		{
			printf("������");
		}
		if (e == a[2])
		{
			printf("�v���C���[�̏����ł�");
		}
	}
	if (p == a[2])
	{
		if (e == a[0])
		{
			printf("�v���C���[�̏����ł�");
		}
		if (e == a[1])
		{
			printf("�v���C���[�̕����ł�");
		}
		if (e == a[2])
		{
			printf("������");
		}
	}
}