#include<stdio.h>
#include<malloc.h>
	struct student {
		char name[20];
		int age;
	};
	void main()
{
	int i,count;
	printf("입력 할 학생수 ");
	scanf("%d",&count);

	struct student *students= (struct student*)malloc(sizeof(struct student) *count);
	for(i=0;i<count;i++){
		printf(" 이름과 나이 입력 : ");
		scanf("%s %d",students[i].name,&students[i].age);
	}
	printf("\n--학생 명단 --\n");
	for(i=0;i<count;i++){
		printf("이름 : %s 나이 : %d ",students[i].name,students[i].age);
	}
	free(students);
}
