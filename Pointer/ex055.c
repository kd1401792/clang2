#include<stdio.h>
main()
{
	int a[] = { 11,22,33,44,55,66 };
	float b[] = { 11.1,22.2,33.3,44.4};
	int *p_a;
	float *p_b;
	
	float sum, ave;
	int i;

	sum = 0;
	p_a = a;
	for (i=0; i<6; i++)
	{
		sum += *p_a;
		p_a++;
	}
	ave = sum / i;
	printf("�z��a\t���v =\t%d\t���� = %.3f\n", (int)sum, ave);

	sum = 0;
	p_b = b;
	for (i = 0; i<4; i++)
	{
		sum += *p_b;
		p_b++;
	}
	ave = sum / i;
	printf("�z��b\t���v =\t%.3f\t���� = %.3f", sum, ave);
}