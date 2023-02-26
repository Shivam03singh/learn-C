#include <stdio.h>
#include <conio.h>
int main()
{
	int r,c,i,j,k,matrix1[100][100],matrix2[100][100],product[100][100];
	printf("Enter the number of rows(1-100) : ");
	scanf("%d",&r);
	printf("Enter the number of columns(1-100) : ");
	scanf("%d",&c);
	
	printf("\nEnter the elements of first matrix:\n");
	for (i=0;i<r;++i){
		for (j=0; j<c; ++j){
			printf("Enter Element [%d][%d] : ",i+1,j+1);
			scanf("%d",&matrix1[i][j]);
		}
	}
	printf("\nEnter the elements of second matrix:\n");
	for (i=0;i<r;++i){
		for (j=0;j<c;++j){
			printf("Enter Element [%d][%d] : ",i+1,j+1);
			scanf("%d",&matrix2[i][j]);
		}
	}
	//multiplication
	for (i=0;i<r;++i){
		for (j=0;j<c;++j){
			product[i][j]=0;
			for (k=0;k<c;++k){
				product[i][j]+= matrix1[i][k]*matrix2[k][j];
			}
		}
	}
	//displaying the matrix
	printf("\nProduct of the matrices:\n");
	for (i=0;i<r;++i){
		for (j=0;j<c;++j){
			printf("%d   ", product[i][j]);
			if (j==c-1){
				printf("\n\n");
			}
		}
	}
	return 0;
}