#include<stdio.h>
void gugu()
{
	int i,j;
	printf(" ����ϰ�  ���� ���� �Է� : ",i);
	scanf("%d",&i);

	for(j=1;j<=9;j++){
		printf("%d x %d = %2d\n",i,j,i*j);
	}
}
void main()
{
	void gugu();
}
