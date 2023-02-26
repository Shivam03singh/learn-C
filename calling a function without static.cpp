#include <stdio.h>
main()
{
	int fun();
	printf("%d",fun());
	printf("%d",fun());
}
int fun()
{
	int count = 0;
	count++;
}