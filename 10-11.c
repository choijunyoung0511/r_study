#include<stdio.h>
void gugu()
{
	int i,j;
	printf("출력하고 싶은 단을 입력 : ");
	scanf("%d",&i);
	
	for(j=1;j<=9;j++)
		printf("%dX%d=%2d\n",i,j,i*j);
}
void main()
{
	gugu();
	}
