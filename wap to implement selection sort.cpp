#include <stdio.h>
int selSort(int arr[], int n){
   int i, j, pos, tmp;
   for (i = 0; i < (n - 1); i++) {
      pos = i;
      for (j = i + 1; j < n; j++) {
         if (arr[pos] > arr[j])
            pos = j;
      }
      if (pos != i) {
         tmp = arr[i];
         arr[i] = arr[pos];
         arr[pos] = tmp;
      }
   }
   printf("\nThe sorted array is\n");
   for (i = 0; i < n; i++)
      printf("%d, ", arr[i]);
   return 0;
}
int main(){
	int i,n,arr[100];
	printf("Enter the size of the list : ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		printf("The element is : ");
		scanf("%d",&arr[i]);
	}
	selSort(arr,n);
}