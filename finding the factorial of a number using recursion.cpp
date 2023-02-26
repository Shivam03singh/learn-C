#include <stdio.h>
main()
{
	int x;
	int fact( int num);
	printf("Enter the number you want to find the factorial for : ");
	scanf("%d",&x);
	printf("The factorial of %d is %d", x,fact(x));
	return 0;
}
int fact(int num)
{
	if (num==1){
		return 1;
	}
	else{
		return (num*fact(num-1));
	}
}