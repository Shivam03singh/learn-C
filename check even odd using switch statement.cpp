#include <stdio.h>
int main()
{
	int number;
	printf("Enter a postive integer number : ");
	scanf("%d",&number);
	switch(number%2)
	{
		case 0:
			printf("%d is an Even number.\n",number);
			break;
		case 1:
			printf("%d is an Odd number.\n",number);
			break;
	}
	return 0;
}