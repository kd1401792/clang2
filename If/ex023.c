#include<stdio.h>
main()
{
	int time;
	printf("�b������� : ");
	scanf("%d", &time);
	if (time <= 5000) {
		printf("%d����%d��%d�b", time / 3600, time % 3600 / 60, time % 3600 % 60);
	}
	else {
		printf("error");
	}
}