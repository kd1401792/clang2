#include<stdio.h>
#include<stdlib.h>
#include<time.h>
main()
{
	int i,k[5],n;
	char s[20];
	srand(time(0));
	printf("���������͂��Ă�������");
	scanf("%s", &s[0]);
	for (i = 0; s[i] != '\0'; i++)
	{
		k[i] = rand() % 5;
		s[i] += k[i];
	}
	printf("�Í���������́A%s\n", &s[0]);
	for (n = 0; n < i; n++)
	{
		printf("%d", k[n]);
	}
}