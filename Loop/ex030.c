#include<stdio.h>
main()
{
	int num, a;
	printf("������� : ");
	scanf("%d", &num);
	a = 0;
	while (a < 10)
	{
		a += 1;
		printf("%d + %d = %d\n", num, a, num + a);
	}
}