#include<stdio.h>
void Str_cat(char* s1, char* s2);

int main(void)
{
	char data[256];
	char data2[256];
	
	printf("�z��a: ");
	scanf("%s", &data);
	printf("�z��b: ");
	scanf("%s", &data2);
	Str_cat(data, data2);

	printf("�z��a: %s\n",data);
}
void Str_cat(char* s1, char* s2)
{
	int i,j;
	for (i = 0; *(s1+i) != '\0'; i++);
	for (j = 0; *(s1 + i) = *(s2 + j); i++, j++);

}