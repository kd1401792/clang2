#include<stdio.h>
void comparison(int x, int y, int z, int *p_max, int *p_min);
main()
{
	int a, b, c, d, e;
	printf("�������R����: ");
	scanf("%d%d%d", &a, &b, &c);
	comparison(a, b, c, &d, &e);
	printf("�ő�l = %d  �ŏ��l = %d", d, e);
}
void comparison(int x, int y, int z, int *p_max, int *p_min)
{
	*p_max = x;
	if (*p_max < y)
	{
		*p_max = y;
	}
	if (*p_max < z)
	{
		*p_max = z;
	}

	*p_min = y;
	if (*p_min > x)
	{
		*p_min = x;
	}
	if (*p_min > z)
	{
		*p_min = z;
	}
}