#include<stdio.h>
main()
{
	int a1,a2, a3, sum;
	float avg;
	printf("������3���� : ");
	scanf("%d%d%d", &a1, &a2, &a3);
	sum = a1 + a2 + a3;
	avg = (float)sum / 3;
	printf("���v= %d \t ����= %.2f", sum, avg);
}