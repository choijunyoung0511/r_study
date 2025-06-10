#include<stdio.h>
void main()
	FILE *wfp;
	int i,j;
	wfp = fopen("c:\\r_study\\gugu.txt","w");
	for(i=1;i<=9;i++){
		fprintf(wfp,"#Á¦%d´Ü#",i);
		}
		fprintf(wfp,"\n\n");
		
	for(i=1;i<=9; i++){
		for(j=2;j<=9;j++){
			fprintf(wfp,"%dX%d=%2d\n",i,j,i*j);
		}
		fprintf(wfp,"\n");
	}
	fclose(wfp);

