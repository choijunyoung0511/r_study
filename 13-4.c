#include<stdio.h>
#include<malloc.h>

struct student{
		char name[20];
		int age;
};
void main()
{
	int count;
	int i;
	printf("입력할 학생 수 : " );
	scanf("%d",&count);
	struct student *s;

	s = (struct student*) malloc (sizeof(struct student) * count);

	for(i=0;i<count;i++){
		printf("이름과 나이 입력 : ");
		scanf("%s %d",s[i].name,&s[i].age);
	}
	
	printf("\n--학생 명단--\n");
	
	for(i=0;i<count;i++){
		printf("이름 : %s , 나이 : %d\n",s[i].name, s[i].age);
	}
	free(s);
}
