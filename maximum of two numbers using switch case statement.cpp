#include <stdio.h>
#include <conio.h>  
   
int main() {  
    int a, b;  
   
    /* Take two numbers as input from user
  using scanf function */
    printf("Enter Two Integers\n");  
    scanf("%d %d", &a, &b);  
   
    switch(a > b) {     
        /* a>b comparison returns true(1)  */ 
        case 1: printf("%d is Maximum", a);  
                break;  
        /* a>b comparison returns false(0) */ 
        case 0: printf("%d is maximum", b);  
                break;  
    }  
     
    getch();
    return 0;  
}