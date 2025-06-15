#include<stdio.h>
void main()
{
	int a,b;
	int *p1,*p2,tmp;

	printf("a의 값을 입력");
	scanf("%d", &a);

	printf("b의 값을 입력 ");
	scanf("%d",&b);

	p1=&a;
	p2=&b;

	tmp = *p1;
	*p1 = *p2;
	*p2 = tmp;

	printf("바뀐값 a는 %d, b는 %d\n", a,b);
}
