#include<stdio.h>
main()
{
	char e;
	printf("���Z�q������ : ");
	scanf("%c", &e);
	switch (e)
	{
	case '+':
		printf("���Z�ł�");
		break;
	case '-':
		printf("���Z�ł�");
		break;
	case '*':
		printf("��Z�ł�");
		break;
	case '/':
		printf("���Z�ł�");
		break;
	case '%':
		printf("���܂�ł�");
		break;
	default :
		printf("���̑��ł�");
	}
}