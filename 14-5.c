#include<stdio.h>
void main(int argc, char argv[]){
	FILE* wfp;
	FILE* rfp;
	char str[200];
	if(argc !=3){
		printf("�Է��� ������ 3���� �ƴմϴ� \n");
		return;
	}
	rfp = fopen(argv[1], "r");
	wfp = fopen(argv[2],"w");
	for (;;){
		fgets(str,199,rfp);
		if(feof,rfp){
			break;
		}
		fputs(str,wfp);
	}
	fclose(rfp):
	fclose(wfp);
}
