#include <stdio.h>
#include <conio.h>
main()
{
	int length,metres,feet,inches,cm;
	printf("Enter the distance between the two cities : ");
	scanf("%d",&length);
	metres=length;
	feet=length*3.2;
	inches=length*39.4;
	cm=length*100;
	printf("The length in metres is %d m ",metres);
	printf("\nThe length in feet is %d ft ",feet);
	printf("\nThe length in inches is %d in",inches);
	printf("\nThe length in centimetres is %d cm",cm);
	getch();
}