#include<stdio.h>
void main(int argc, char argv[]){
	FILE* wfp;
	FILE* rfp;
	char str[200];
	if(argc !=3){
		printf("입력할 변수가 3개가 아닙니다 \n");
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
