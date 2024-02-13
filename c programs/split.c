#include<stdio.h>
#include<string.h>
void splitwordsbycomma(char*inputstring) {
	int length=strlen(inputstring);
	int i;
	for(i=0;i<length;i++) {
		if(inputstring[i]==' ')
		{
			inputstring[i]=',';
		}
	}printf("splitwords : %s\n",inputstring);
}
int main()
{
	char inputstring[100];
	printf("enter a string:");
	gets(inputstring);
	splitwordsbycomma(inputstring);
	return 0;
}
