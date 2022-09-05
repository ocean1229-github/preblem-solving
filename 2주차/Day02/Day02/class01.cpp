#include<stdio.h>

#define _MYDEBUG_


void func1(void)
{
	printf("call func1\n");
	printf("call func1\n");
	printf("call func1\n");
}

void func2(void)
{
	printf("call func2\n");
	printf("call func2\n");
	printf("call func2\n");
	//return num;
}

int main() {
	int nValue = 100;

	printf("Value : %d\n", nValue);

//#ifdef _MYDEBUG_
	printf("Value : %p\n", &nValue);

	func1();
	int val = func2(0);
//#endif
	printf("Good Bye!!\n");
	return 0;
}