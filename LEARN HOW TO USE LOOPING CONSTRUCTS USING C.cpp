#include<stdio.h>

#include<conio.h>

main()

{

  int i, sum=0;

  printf("All nos. between 100 - 200 which is divisible by 5\n");

  for(i=101;i<200;i++)

  {

   if(i%5==0)

   {

    printf("%5d",i);

    sum+=i;

   }

  }

  printf("\n\nsum = %d",sum);

  getch();

}