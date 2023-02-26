#include <stdio.h>
int main()
{
	int i, low,high,mid,n,key,array[100];
	printf("Enter the numnber of elements : ");
	scanf("%d", &n);
	for (i=0;i<n;i++){
		printf("Enter the element : ");
		scanf("%d",&array[i]);
	}
	printf("Enter the value to find : ");
	scanf("%d", &key);
	low=0;
	high=n-1;
	mid=(high+low)/2;
	while (low<=high){
		if (array[mid]<key){
				low=mid+1;
		}
		else if (array[mid]==key){
			printf("%d found at location %d",key,mid+1);
			break;
		}
		else {
			high=mid - 1;
			mid = (low+high)/2;
		}	
	}
	if (low>high){
		printf("Not found! %d isn't present in the list",key);
		return 0;
	}
}