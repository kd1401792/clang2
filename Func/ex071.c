#include<stdio.h>
int gokei(int a, int b,int c);
float heikin(int a, int b,int c);

main()
{
	int a, b, c, g;
	float h;
	printf("������3����: ");
	scanf("%d%d%d", &a, &b, &c);
	g = gokei(a, b, c);
	h = heikin(a,b,c);
	printf("���v��%d�ł�\t���ς�%.2f", g, h);
}

int gokei(int a, int b, int c)
{
	int ans;
	ans = a + b + c;
	return(ans);
}
float heikin(int a, int b,int c)
{
	float result;
	result = (a + b + c) / 3.0;
	return(result);
}