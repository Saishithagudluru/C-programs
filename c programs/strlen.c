#include<stdio.h>
void strlen() {
	char data[100];
	printf("Enter a string:");
	gets(data);
	int len=0;
	for(int i=0;data[i]!='\0';i++) {
		len++;
	}
	printf("Given string length is:%d\n",len);
}
int main() {
	strlen();
}
