#include<stdio.h>

void func1(void)
	{
	cprintf("This is function %d\n",1);
	}
int main(void)
	{
	cprintf("%s","this is a string\r\n");
	func1();
	}