#include<stdio.h>
main()
{
	int a[2][2][3] ={{ {3,4,5},{4,5,6} }, { {2,2,3},{2,5,6} }};
	int gokei, i, j, n;
	gokei = 0;

	for (i = 0; i < 2; i++)
	{
		printf("�A�p�[�g%d ", i + 1);
		for (j = 0; j < 2; j++)
		{
			printf("(%d�K)", j + 1);
			for (n = 0; n < 3; n++)
			{
				printf("%d ", a[i][j][n]);
				gokei += a[i][j][n];
			}
		}
		printf("\n");
	}
	printf("�S�̂�%d�l�Z��ł��܂�",gokei);
}