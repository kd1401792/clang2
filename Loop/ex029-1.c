#include<stdio.h>
main()
{
	int num, count;
	printf("�������� : ");
	scanf("%d", &num);
	count = num;
	while (count > 0)
	{
		printf("*");
		count -= 1;
	}
}