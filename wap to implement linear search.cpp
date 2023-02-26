#include <stdio.h>
int search(int arr[], int N, int x)
{
	int i;
	for (i=0;i<N;i++){
		if (arr[i] == x){
			return i;
		}
	}
return -1;
}
int main()
{
	int arr[100],x,result,N;
	int search(int arr[],int N, int x);
	printf("Enter the size of the list : ");
	scanf("%d",&N);
	for (int i=0;i<N;++i){
		printf("Enter the element : ");
		scanf("%d",&arr[i]);
	}
	printf("\nThe array is : \n");
	for (int i = 0; i<N;++i){
		printf("%d ,",arr[i]);
	}
	printf("\nEnter the number you are searching for : ");
	scanf("%d",&x);
	result = search(arr,N,x);
	if (result == -1){
		printf("The element is not present in the list");
	}
	else{
		printf("The element is at index %d", result);
	}
	return 0;
}