#include<stdio.h>
#include<string.h>
#define NUM 5
struct profile { char name[20]; int birth[3]; char blood[5]; };
main()
{
	struct profile data[NUM];
	struct profile* p;
	p = data;
	int i;
	for (i = 0; i < NUM; i++, p++)
	{
		printf("���O�����: ");
		scanf("%s", &p->name);
		printf("���N�������󔒂ŋ�؂��ē���: ");
		scanf("%d%d%d", &p->birth[0], &p->birth[1], &p->birth[2]);
		printf("���t�^�����: ");
		scanf("%s", &p->blood);
		printf("\n");
	}
	p = data;
	for (i = 0; i < NUM; i++, p++)
	{
		if (strcmp("A",p->blood)==0)
		{
			printf("%s�[�[�@%d�N%d��%d�����@���t�^�[%s\n", p->name, p->birth[0], p->birth[1], p->birth[2], p->blood);
		}
		else
		{

		}
	}
}