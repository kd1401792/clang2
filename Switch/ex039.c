#include<stdio.h>
main()
{
	char flg;
	int d1, d2, d3;
	printf("��������� : ");
	scanf("%c", &flg);
	printf("��������� : ");
	scanf("%d%d%d", &d1, &d2, &d3);
	switch (flg)
	{
	case 'd':
	case 'D':
		if (d1 > d2)
		{
			if (d1 > d3)
			{
				printf("�ő�l��%d�ł�", d1);
			}
			else
				printf("�ő�l��%d�ł�", d3);
			if (d2 > d3)
			{
				printf("�ő�l��%d�ł�", d2);
			}
			else
			{
				printf("�ő�l��%d�ł�", d2);
			}
		}
	case 's':
	case 'S':
		if (d1 < d2)
		{
			if (d1 < d3)
			{
				printf("�ŏ��l��%d�ł�", d1);
			}
			else
				printf("�ŏ��l��%d�ł�", d3);
			if (d2 < d3)
			{
				printf("�ŏ��l��%d�ł�", d2);
			}
			else
			{
				printf("�ŏ��l��%d�ł�", d2);
			}
		}
	case 'g':
	case 'G':
		printf("���v��%d�ł�", d1 + d2 + d3);
	case 'h':
	case 'H':
		printf("���ς�%.2f�ł�", ((float)d1 + (float)d2 + (float)d3) / 3);
	}
}