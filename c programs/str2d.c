#include<stdio.h>
#include<unistd.h>
int main()
{
	char data[6][20]={"rahul dravid","sachin tendular","sourav ganguly","anil kumble","vvs laxman"};
	printf("size of data=%lu\n",sizeof(data));
	printf("%c\n",data[3][5]);
	printf("%s\n",&data[3][5]);
	printf("%s\n",&data[0][0]);
}

