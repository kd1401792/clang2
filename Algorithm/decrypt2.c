#include<stdio.h>
main()
{
	int i,num;
	char s[20];
	printf("���������͂��Ă�������> ");
	scanf("%s", &s[0]);
	for (i = 0; i < 5; i++)
	{
		printf("s[%d]�̕������L�[> ",i);
		scanf("%d", &num);
		s[i] -= num;
	}
	printf("�������ςݕ�����́A%s", &s[0]);
}