#include<stdio.h>

void func1(void)
	{
	cprintf("This is function %d\n",1);
	}

void func2(void)
	{
	cprintf("This is function %d\n",2);
	}

void funcB(void)
	{
	cprintf("This is function %c\n",42);
	}

int main(void)
	{
	cprintf("%s","this is a string\r\n");
	func1();
	func2();
	}