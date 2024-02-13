#include<stdio.h>
void arrmax() {
	int i,n;
	int maxval;
	int arr[n];
	printf("Enter the size of array:");
	scanf("%d",&n);
	printf("Enter the array elements:");
	for(i=0;i<n;i++) {
		scanf("%d",&arr[i]);
	}
	maxval=arr[0];
	for(i=0;i<n;i++) {
		if(arr[i]>maxval) {
			maxval=arr[i];
		}
	}
	printf("The maximum array element is %d\n",maxval);
}
int main() {
	arrmax();
}
	
