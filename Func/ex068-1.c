#include<stdio.h>
main()
{
	int a,b,cnt;
	printf("�����Q����> ");
	cnt = scanf("%d%d", &a, &b);
	
	if (cnt == EOF)
	{
		printf("EOF\n");
	}
	else {
		printf("%d����\n", cnt);
	}
}