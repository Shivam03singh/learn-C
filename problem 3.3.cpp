#include<stdio.h>
#include<conio.h>
#include<math.h>
main ()
{
  int choice, num, I, Square;
  double number, root;
  while (1)
    {
      printf ("1. Odd/Even \n");
      printf ("2. Positive/Negative\n");
      printf ("3. Square of number\n");
      printf ("4. Square root of number\n");
      printf ("5. Exit\n");
      printf ("\nYour choice:");
      scanf ("%d", &choice);
      switch (choice)
  {
  case 1:
    printf ("\nEnter number:");
    scanf ("%d", &num);
    if (num % 2 == 0)
      printf ("\n Even number.\n");
    else
      printf ("\nOdd number.\n");
    break;
      
  case 2:
    printf ("Enter a number: ");
    scanf ("%lf", &number);
    if (number <= 0.0)
      {
        if (number == 0.0)
    printf ("You entered 0.");
        else
    printf ("You entered a negative number.");
      }
    else
      printf ("You entered a positive number.");
    break;
    
  case 3:
    printf (" \n Please Enter any integer Value : ");
    scanf ("%d", &num);
    Square = num * num;
    printf ("\n Square of a given number %d is  =  %d\n", num, Square);
    break;
    
  case 4:
    printf ("Enter any number to find square root: ");
    scanf ("%lf", &number);
    root = sqrt (number);
    printf ("Square root of %.2lf = %.2lf\n", number, root);
    break;
   
  case 5:
    goto x;
  }
  x:printf("Thank You for using loop!");
    break;

    }
}