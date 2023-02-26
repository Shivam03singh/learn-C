#include <stdio.h>
int main()
{
	int n,pos;
	double arr[100],max;
	printf("Enter the number of elements (1 to 100): ");
	scanf("%d",&n);
	
	for (int i=0;i<n; ++i){
		printf("Enter number %d: ",i+1);
		scanf("%lf", &arr[i]);
	}
	
	for (int i=1;i<n;++i){
		if (arr[i]<arr[i+1]){
			max=arr[i+1];
			pos = i+1;
		}
	}
	printf("The largest element = %.2lf and the position is %d", max,pos);
	return 0;
}