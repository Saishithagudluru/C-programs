#include<stdio.h>
int arrsize();
int arrsize() {
	int arr[] = {10,20,30};
	printf("The size of array is:%d\n",sizeof(arr));
}
int main() {
	arrsize();
}

