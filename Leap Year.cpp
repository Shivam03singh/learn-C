#include <stdio.h>
#include <conio.h>
main()
{
	int year;
	char option;
	printf("Enter the year : ");
	scanf("%d",&year);
	if ((year%4==0) && (year%100!=0))
	{
		printf("The year is a leap year");
	}
	else if (year%400 == 0) 
	{
		printf("The year is a leap year");
	}
	else {
		printf("The year is not a leap Year");
	}
	getch();
}