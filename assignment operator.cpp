#include <stdio.h>
int main()
{
    int a , c;
    printf("Enter the value of a : ");
    scanf("%d",&a);
    c = a;     
    printf("c = %d\n", c);
    c += a;  
    printf("c = %d\n", c);
    c -= a;    
    printf("c = %d\n", c);
    c *= a;    
    printf("c = %d\n", c);
    c /= a;  
    printf("c = %d\n", c);
    c %= a;   
    printf("c = %d\n", c);
    return 0;
}

