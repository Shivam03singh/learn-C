#include <stdio.h>
#include <stdlib.h>
double BigEl(double *arr,double arrSize)
{
	int i;
	double maximum = arr[0];
	double **max_pos;
	max_pos = &arr;
	for (i=0;i<2;i++){
		if (arr[i]>maximum){
			maximum = arr[i];
			*max_pos = &arr[i];
		}
	}
	return **max_pos;
}
int main()
{
	double myarr[2];
	double *max_pos;
	int i;
	printf("Please insert 2 numbers to the array\n");
	for (i=0; i<2; i++){
		printf("Enter the Element : ");
		scanf("%lf",&myarr[i]);
	}
	max_pos = &BigEl(&myarr,2);
	printf("The largest number is : ",max_pos);
}