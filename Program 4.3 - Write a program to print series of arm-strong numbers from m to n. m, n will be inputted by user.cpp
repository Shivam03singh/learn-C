#include <stdio.h>
int main()
{
   int i,j,cur, r, m, n,temp;
   long sum;
   printf("Enter lower limit: ");
   scanf("%d", &m);
   printf("Enter upper limit: ");
   scanf("%d",&n);
   printf("Armstrong numbers between %d to %d are:\n", m,n);
   for(i=m; i<=n; i++){
       temp = i;
       sum = 0;
       while(temp != 0){
           r=temp%10;
           temp=temp/10;
           sum += r*r*r;
       }
	   if(sum == i){
           printf("%d   ", i);
       }
   }

}