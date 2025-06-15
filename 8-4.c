#include<stdio.h>
void main()
{
	int gugu[9][9];
	int i,k;
	for(k=0; k<=9; k++){
		for(i=0; i<=9; i++0){
			gugu[k][i] = (k+2) * (i+1);
		}
	}

	for(k=0; k<=9; k++){
		for(i=0;i<=9; i++){
			printf(" %d X %d = %2d\t", k+2, i+1, gugu[k][i]);
		}
		print("\n");
	}

