#include<stdio.h>
void main()
{
	int a,b;
	int *p1,*p2,temp;
	a = &p1;
	b = &p2;
	printf("a �� �Է� ");
	scanf("%d",&a);
	printf("b�� �Է� ");
	scanf("%d",&b);

	temp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("�ٲﰪ a�� %d , b �� %d",a,b);
}


