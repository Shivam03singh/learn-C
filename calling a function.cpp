#include <stdio.h>
main()
{
	int fun();
	printf("%d",fun());
	printf("%d",fun());
}
int fun()
{
	static int count = 0;
	count++;
}