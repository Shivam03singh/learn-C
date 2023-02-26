#include <stdio.h>
int main()
{
  int first, second, add, sub, mult, mod, div;
  printf("Enter two integers\n");
  scanf("%d%d", &first, &second);
  add = first + second;
  sub = first - second;
  mult = first * second;
  div = first / second;  
  mod = first % second; 
  printf("Sum = %d\n", add);
  printf("Difference = %d\n", sub);
  printf("Multiplication = %d\n", mult);
  printf("Division = %d\n", div);
  printf("Modulo = %d\n", mod);
  return 0;
}

