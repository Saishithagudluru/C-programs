#include<stdio.h>
int main() {
	int a[] = {2,1,5,2,9,6,1};
	int n=7,i,count,j;
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j]) {
				count++;
			}
		}
		printf("Element is %d and count is %d\n",a[i],count);
	}
}
