#include<stdio.h>
main()
{
	int num, sum, c;
	sum = 0;
	c = 0;
	num = 0;
	do
	{
		sum += num;
		c++;
		printf("����(-999�ŏI��?)");
		scanf("%d", &num);
	} while (num != -999);
	c--;
	printf("���v= %d\t����= %f", sum, (float)sum / c );
}