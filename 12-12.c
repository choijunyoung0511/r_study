#include<stdio.h>
#include<malloc.h>;
void main()
{
	int *p;
	int i,count,hap=0;
	printf("�Է��� ������ ? ");
	scanf("%d",&count);
	p = (int*)malloc(sizeof(int)*count);
	for(i=0;i<count;i++){
		printf("%d ���� ���� : ",i+1);
		scanf("%d",&p[i]);
	}
	for(i=0;i<count;i++){
		if(p[i] % 2==0){
			hap += p[i];
		}
	}
	printf("������ ¦�� �� ==>  %d\n",hap);
	free(p);
}
