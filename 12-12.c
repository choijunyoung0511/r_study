#include<stdio.h>
#include<malloc.h>;
void main()
{
	int *p;
	int i,count,hap=0;
	printf("입력할 개수는 ? ");
	scanf("%d",&count);
	p = (int*)malloc(sizeof(int)*count);
	for(i=0;i<count;i++){
		printf("%d 번쨰 숫자 : ",i+1);
		scanf("%d",&p[i]);
	}
	for(i=0;i<count;i++){
		if(p[i] % 2==0){
			hap += p[i];
		}
	}
	printf("입혁한 짝수 합 ==>  %d\n",hap);
	free(p);
}
