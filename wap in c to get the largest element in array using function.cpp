#include <stdio.h>
int FindMax(int arr[], int n)
{
	int i,max;
	max=arr[0];
	for (i=0; i<n; i++){
		if (arr[i]>max){
			max=arr[i];
		}
	}
	return max;
}
int main()
{
	int arr[100],n,i;
	printf("Enter the size of the array : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("Enter element number %d : ",i+1);
		scanf("%d",&arr[i]);
	}
	printf("The largest Number is %d ",FindMax(arr,n));
}