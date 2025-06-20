#include<stdio.h>
void main()
{
	int a,b;
	int *p1,*p2,temp;
	a = &p1;
	b = &p2;
	printf("a 값 입력 ");
	scanf("%d",&a);
	printf("b값 입력 ");
	scanf("%d",&b);

	temp = *p1;
	*p1 = *p2;
	*p2 = tmp;
	printf("바뀐값 a는 %d , b 는 %d",a,b);
}


