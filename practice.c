#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int d[10];
	int s, i;
	srand(time(0));
	for (i = 0; i < 10; i++)
	{
		d[i] = rand() % 50;
		printf("%d\n", d[i]);
	}
	
	printf("�T���ls�����: ");
	scanf("%d", &s);
	for (i = 0; i < 10; i++)
	{
		if (s == d[i])
		{
			break;
		}
	}

	if (i == 10)
	{
		printf("������Ȃ�����");
	}
	else
	{
		printf("%d", i);
	}
}