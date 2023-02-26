// C program to illustrate
// Call by Reference
#include <stdio.h>
// Function Prototype
int swapx(int*, int*);
// Main function
int main()
{
   int a = 10, b = 20;
   // Pass reference
   swapx(&a, &b);
   printf("a=%d b=%d\n", a, b);
   return 0;
}
// Function to swap two variables
// by references
int swapx(int* x, int* y){
	int t;
	t = *x;
	*x = *y;
	*y = t;
	printf("x=%d y=%d\n", *x, *y);
}