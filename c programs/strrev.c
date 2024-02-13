#include<stdio.h>
#include<string.h>
int main()
{
	int i,j;
	char A[30]="c programming";
	char x;
	printf("string A=%s\n",A);
	int len=0;
	for(i=0;A[i]!='\0';i++)
	{
		len++;
	}
	for(i=0,j=len-1;i<(len/2);i++,j--)
	{
		x=A[i];
		A[i]=A[j];
		A[j]=x;
	}
	printf("reverse string =%s\n",A);
}


