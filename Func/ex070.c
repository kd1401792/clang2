#include<stdio.h>
int add(int a, int b);
main()
{
	int a, b, gokei;
	printf("�������Q����: ");
	scanf("%d%d", &a, &b);
	gokei = add(a, b);
	printf("���v��%d�ł�\n", gokei);
}

int add(int a, int b)
{
	int ans;
	ans = a + b;
	return(ans);
}