#include<stdio.h>
main()
{
	int time;
	printf("�b������� : ");
	scanf("%d", &time);
	if (time > 0)
	{
		if (time <= 5000)
		{
			printf("%d���� %d �� %d �b ", time / 60 / 60, time % 60, time % 60 % 60);
		}
		else
		{
			printf("���͒l��5000�܂łł�");
		}
	}
	else
	{
		printf("�}�C�i�X�͓��͂ł��܂���");
	}
}