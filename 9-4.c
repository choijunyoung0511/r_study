#include<stdio.h>
void main()
{
	int a,b;
	int *p1,*p2,tmp;
	printf("a input");
	scanf("%d",&a);
	printf("b input");
	scanf("%d",&b);

	p1= &a;
	p2= &b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf(" tutn a %d, b %d\n", a,b);
}

