#include <stdio.h>
#include <conio.h>
int main()
{
	int year;
	printf("enter the year to check if it is a leap year or not \n");
	scanf("%d",&year);
	(year%4==0 && year%100!=0) ? printf("Leap YEar"):
		((year%400==0)? printf("Leap Year"): printf("not a Leap Year"));
}