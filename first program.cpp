#include<stdio.h> //header file standard input output
#define sum 0; //This is macro definition
int a=10,b=20; //declaring global variables a and b
void show(); //function declaration/function prototype

int main()     //main function from where program executoin begins
{
	int x=20; //local variable declaration and definition
	printf("Local variable x=%d",x);
	show();   //function call
	return(0); //returning 0 value to operating system
}               //end of main