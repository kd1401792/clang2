#include<stdio.h>
int result(char moji);
main()
{
	int r;
	char moji;
	printf("�A���t�@�x�b�g1����? > ");
	scanf("%c", &moji);
	r = result(moji);
	if (r = 0)
	{
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�������ł�", r);
	}
	if (r = 1)
	{
		printf("�߂�l�́A%d�Ȃ̂œ��͂��������́A�啶���ł�",r);
	}
}

int result(char moji)
{
	int i;
	if (moji <= 'Z' && moji >= 'A')
	{
		i = 1;
	}
	else if (moji <= 'z' && moji >= 'a')
	{
		i = 0;
	}
	return (i);
}