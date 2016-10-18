#include<stdio.h>

void func1(void)
	{
	cprintf("This is function %d\n",1);
	}

void func2(void)
	{
	cprintf("This is function %d\n",2);
	}

void funcA(void)
	{
	cprintf("This is function %c\n",41);
	}

void funcC(void)
	{
	cprintf("This is function %c\n",43);
	}

void funcD(void)
	{
	cprintf("This is function %c\n",44);
	}

void funcE(void)
	{
	cprintf("This is function %c\n",45);
	}

int main(void)
	{
	cprintf("%s","this is a string\r\n");
	func1();
	func2();
	funcA();
	func1();
	func2();
	funcC();
	func1();
	func2();
	funcD();
	func1();
	func2();
	funcE();
	}