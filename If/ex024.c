#include<stdio.h>
main()
{
	char moji1;
	int moji2;
	printf("���������: ");
	scanf("%c", &moji1);
	moji2 = ('%c', moji1);
	if (moji2 >= 65 && moji2 <=90)
	{
		printf("�啶���ł�");
	}
	else
	{
		printf("���̑��̕����ł�");
	}
}