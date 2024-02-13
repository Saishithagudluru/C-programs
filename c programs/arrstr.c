#include<stdio.h>
#include<string.h>
void chararr() {
	int i,n;
	char data[n];
	printf("Enter the size of character: ");
	scanf("%d",&n);
	printf("Enter the string:");
	fgets(data,20,stdin);
	printf("The given string is:%s\n",&data[0]);
}
int main() {
	chararr();
}
