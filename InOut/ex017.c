#include<stdio.h>
main()
{
	float a, b, c;
	printf("1�ڂ̎��� : ");
	scanf("%f", &a);
	printf("2�ڂ̎��� : ");
	scanf("%f", &b);
	printf("3�ڂ̎��� : ");
	scanf("%f", &c);
	printf("���v= %8.2f ����= %8.2f", a + b + c, (a + b + c) / 3);
}