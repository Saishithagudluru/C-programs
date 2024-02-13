#include<stdio.h>
int main() {
	int A[]={1,87,98,78,45};
	int B[]={44,67,89,43,78,32,90,32};
	int C[]={3,5,9,54,91,32,87,4,23,56,90,33,90,21};
	int D[]={3,88,76,43,21,99,45,66,7,43};
	int max_a,max_b,max_c,max_d;
	max_a=findmax(A,5);
	printf("Max value for array A=%d\n",max_a);
	max_b=findmax(B,8);
	printf("Max value for array B=%d\n",max_b);
	max_c=findmax(C,14);
	printf("Max value for array C=%d\n",max_c);
	max_d=findmax(D,10);
	printf("Max value for array D=%d\n",max_d);
}
int findmax(int x[],int size) {
	int max;
	max=x[0];
	for(int i=1;i<size;i++) {
		if(x[i]>max) {
			max=x[i];
		}
	}
	return max;
}


