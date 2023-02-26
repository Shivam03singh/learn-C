#include <stdio.h>
int bubbleSort(int arr[],int n)
{
	int i,j,temp;
	for (i=0;i<n;i++){
		for (j=0;j<n-i-1;j++){
			if (arr[j] > arr[j+1]){
				temp = arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("The sorted array is :\n");
	for (i=0;i<n;i++){
		printf(" %d,",arr[i]);
	}
}

int main()
{
	int i,n,arr[100];
	printf("Enter the size of the list : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("The element is : ");
		scanf("%d",&arr[i]);
	}
	bubbleSort(arr,n);
}