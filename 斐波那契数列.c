#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <stdlib.h>

int fun1(int n)
{
	if (n > 2)
	{
		return fun1(n - 1) + fun1(n - 2);
	}
	return 1;
}

int fun2(int n)
{
	int a = 1, b = 1, c = 1;
	while (n>2)
	{
		c = a + b;
		a = b;
		b = c;
		n--;
	}
	return c;
}
int main(int argc, char *argv[]) 
{
	int n;
	scanf("%d", &n);
	printf("%d\n", fun1(n));
	printf("%d\n", fun2(n));
	return 0;
}
