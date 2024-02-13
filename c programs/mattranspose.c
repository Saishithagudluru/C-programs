#include<stdio.h>
int main() {
	int transpose[10][10];
	int a[2][3]={{1,2,3},{4,5,6}};
	for(int i=0;i<2;i++) {
		for(int j=0;j<3;j++) {
			transpose[j][i]=a[i][j];
		}
	}
	printf("\nTranspose of the matrix:\n");
 	for (int i = 0; i < 3; ++i)
 	for (int j = 0; j < 2; ++j) {
		printf("%d",transpose[i][j]);
		if(j==2-1)
			printf("\n");
		}
	}
