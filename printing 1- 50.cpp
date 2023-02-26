#include <stdio.h>
main()
{
	int fun(int num);
	printf("Numbers from 1 - 50");
	fun(1);
}
int fun(int num)
{
	if (num<=50){
		printf("\n%d",num);
		num = num+1;
		fun(num);
	}
}