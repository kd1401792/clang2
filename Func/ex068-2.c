#include<stdio.h>
main()
{
	char dumy[256];
	char* cp;
	printf("���������> ");
	cp = gets(dumy);

	while (cp != NULL)
	{
		printf("���͂��ꂽ�̂�%s\n", cp);
		printf("���������>");
		cp = gets(dumy);
	}
}