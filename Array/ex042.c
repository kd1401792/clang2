#include<stdio.h>
main()
{
	int i;
	char data[] = "Apple";
	printf("�ꕶ�����\��\n");
	i = 0;
	while(data[i] != '\0')
	{
		printf("%c", data[i]);
		i++;
	}
	printf("\n������ŕ\��\n");
	printf("%s", data);
}