#include<stdio.h>

main()
{
	int max_score;
	char max_name[20];

	int score=0;
	char ch, name[20];
	FILE* fp;
	if (fp = fopen("score.txt", "r"))
	{
		fscanf(fp, "%s%d", max_name, &max_score);
	}
	else
	{
		printf("�t�@�C���ǂݍ��݃G���[\n");
		return;
	}
	printf("�ō����_ ���O:%s �X�R�A%d\n",max_name,max_score);

	printf("�v���C���[�������; ");
	gets(name);

	while (1)
	{
		printf("�X�R�A:%d('e�ŏI��')\n", score);
		ch = getch();
		if (ch == 'e')
		{
			break;
		}
		score++;
	}
	if (score>max_score)
	{
		if (fp = fopen("score.txt", "w"))
		{
			fprintf(fp, "%s\n%d\n", name, score);
			fclose(fp);
		}
	}
}