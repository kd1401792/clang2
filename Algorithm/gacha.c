#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int r,i;
	srand(time(0));
	rand();
	

	for (i = 0; i <= 20; i++)
	{
		rand();
		r = rand() % 100 + 1;
		if (r >= 50)
		{
			printf("���m�[�}��\n");
		}
		if (r >= 20 && r <= 49)
		{
			printf("�������A\n");
		}
		if (r >= 6 && r <= 19)
		{
			printf("������SR\n");
		}
		if (r >= 2 && r <= 5)
		{
			printf("��������UR\n");
		}
		if (r == 1)
		{
			printf("����������LR\n");
		}
	}
}