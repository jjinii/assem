#include <stdio.h>

int foo(int a, int b, int c)
{
	return a+b+c;
}


int main()
{
	foo(1,2,10);
	printf("%d", foo(5,1,2));
	return 0;
}
