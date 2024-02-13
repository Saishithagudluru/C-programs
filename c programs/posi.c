#include<stdio.h>
void pos_findchar(char source[],char findchar) {
	int i;
	for(i=0;source[i]!='\0';i++) {
		if(source[i]==findchar) {
			printf("The entered character %c is present at %d position\n",findchar,i);
		}
	}
}
int main() {
	char A[20]="c programming";
	char ch;
	printf("enter the char to search:");
	scanf("%c",&ch);
	pos_findchar(A,ch);
	return 0;
}
