#include<stdio.h>
#include<malloc.h>
	struct student {
		char name[20];
		int age;
	};
	void main()
{
	int i,count;
	printf("�Է� �� �л��� ");
	scanf("%d",&count);

	struct student *students= (struct student*)malloc(sizeof(struct student) *count);
	for(i=0;i<count;i++){
		printf(" �̸��� ���� �Է� : ");
		scanf("%s %d",students[i].name,&students[i].age);
	}
	printf("\n--�л� ��� --\n");
	for(i=0;i<count;i++){
		printf("�̸� : %s ���� : %d ",students[i].name,students[i].age);
	}
	free(students);
}
