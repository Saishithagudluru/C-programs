#include <stdio.h>

int main() {
    int matrix,i,j;
    printf("Enter one numbers:\n");
    scanf("%d",&matrix);
    for(i=1;i<=matrix;i++) {
        for(j=1;j<=matrix;j++) {
            if (i==1||i==matrix||j==1 || j==matrix) {
            printf("#");
            }
            else
            printf(" ");
        }
	printf("\n");
}
}
