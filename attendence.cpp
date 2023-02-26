#include <stdio.h>
#include <conio.h>
main()
{
	float t,a,perc;
	printf("Total number of classes : ");
	scanf("%f",&t);
	printf("Total number of classes attended : ");
	scanf("%f",&a);
	perc= (a/t)*100;
	printf("The percentage is %f",perc);
}