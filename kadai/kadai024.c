#include<stdio.h>
main()
{
	int ia, ib;
	printf("2�̐��l? ");
	scanf("%d%d", &ia, &ib);
	printf("***%d��%d�̎l���v�Z***",ia,ib);
	printf("%d+\n%d=%d\n", ia, ib,ia+ib);
	printf("%d-%d=%d\n", ia, ib,ia-ib);
	printf("%d*%d=%d\n", ia, ib,ia*ib);
	printf("%d/%d=%d���܂�%d\n", ia, ib,ia/ib,ia%ib);
}