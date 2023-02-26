#include <stdio.h>
main()
{
	int fibo(int);
	int n, m=0, i;
	printf("Till which number do you want your fibonacci series : ");
	scanf("%d",&n);
	printf("Fibonacci series terms are:\n");
	for (i=1;i<=n;i++){
		printf("%d, ", fibo(m));
		m++;
	}
}
int fibo(int n)
{
	if (n==0 || n==1){
		return n;
	}
	else{
		return(fibo(n-1)+fibo(n-2));
	}
}