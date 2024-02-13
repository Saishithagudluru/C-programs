#include<stdio.h>
void fun1() {
	printf("This is fun1:\n");
}
void fun2() {
	printf("This is fun2:\n");
}
void fun3() {
	printf("This is fun3:\n");
}
void fun4() {
	printf("This is fun4:\n");
}
int main() {
	void (*fp)();
	fp=&fun1;
	fp();
	fp=&fun2;
	fp();
	fp=&fun3;
	fp();
	fp=&fun4;
	fp();
}
