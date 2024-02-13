#include<stdio.h>
#include<string.h>
void string_demo() {
	int i,len;
	char A[20] = "cpp";
	char B[30] = "c programming";
	printf("string A = %s\n",A);
	printf("String B = %s\n",B);
	for(i=0;A[i]!='\0';i++) {
		len++;
	}
	printf("length of  string A is %d\n",len);
	for(i=0;B[i]!='\0';i++) {
		A[len+i]=B[i];
	}
	A[len+i]='\0';
	printf("string A after concatination\n");
	printf("String A =%s\n",A);
	
}
int main() {
	string_demo();
}
	
