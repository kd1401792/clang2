#include<stdio.h>
main()
{
	int y;
	printf("�������� : ");
	scanf("%d", &y);
	if (y % 400 == 0)
	{
		printf("���邤�N�ł�");
	}
	else if (y % 4)
	{
		if (y % 100)
		{
			printf("���邤�N�ł�");
		}
		else
		{
			printf("����");
		}
	}
	else
	{
		printf("����");
	}
}