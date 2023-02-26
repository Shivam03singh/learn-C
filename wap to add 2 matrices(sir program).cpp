#include <stdio.h>
main()
{
	int marks1[100][100],marks2[100][100],sum[100][100],i,j;
	for (i=0;i<2;++i)
		for (j=0;j<2;++j){
			printf("Enter the marks1[%d][%d] element : ",i+1,j+1);
			scanf("%d",&marks1[i][j]);
		}
	printf("The first matrix is : %d\n",marks1);
	for (i=0;i<2;++i)
		for (j=0;j<2;++j){
			printf("Enter the marks2[%d][%d] element : ",i+1,j+1);
			scanf("%d",&marks2[i][j]);
		}
	printf("The second matrix is : %d\n",marks2);
	for (i=0;i<2;++i)
		for (j=0;j<2;++j){
			sum[i][j] = marks1[i][j]+marks2[i][j];
		}
	printf("The sum of the matrices is : %d",sum);
}