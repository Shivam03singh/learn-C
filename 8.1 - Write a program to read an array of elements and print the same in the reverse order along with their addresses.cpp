#include <stdio.h>
int main()
{
	int n,i,arr[100];
	int *ptr;
	ptr = &arr[0];
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter the element : ");
		scanf("%d",&*ptr);
		*ptr++;
	}
	ptr = &arr[n - 1];
	printf("\nElements of array in reverse order are : ");
	for (i= n-1; i>=0 ; i--){
		printf("\nElement %d is : %d ",i,*ptr);
		printf("\tThe address is : %d ",ptr);
		ptr--;
	}
}