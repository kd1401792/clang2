#include<stdio.h>
main()
{
	char m1;
	printf("���������: ");
	scanf("%c", &m1);
	if (m1 >= '0' && m1 <= '9')
	{
		printf("�����ł�");
	}
	else if (m1 >= 'A' && m1 <= 'Z')
	{
		printf("�A���t�@�x�b�g�ł�");
	}
	else if (m1 >= 'a' && m1 <= 'z')
	{
		printf("�A���t�@�x�b�g�ł�");
	}
	else
	{
		printf("���̑��̕����ł�");
	}
}