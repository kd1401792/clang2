#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int c,i;
	srand(time(0));
	rand();
	rand();
	c = rand() % (5 - 1 + 1) + 1;
	printf("�����̂��Ȃ��̉^����");
	for (i = 0; i < c; i++)
	{
		printf("��");
	}
	printf(" �ł�");
}