#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c",&ch);
    //condition to check character is alphabet or not
    if((ch>='A' && ch<='Z') || (ch>='a' && ch<='z'))
    {
        //check for VOWEL or CONSONANT
        switch(ch)
		{
   			//check lower case vowel letters
   			case 'a':
   			case 'e':
   			case 'i':
			case 'o':
    		case 'u':
   			//check upper case vowel letters
   			case 'A':
   			case 'E':
   			case 'I':
   			case 'O':
   			case 'U':
   				
  			    printf("%c is a vowel",ch);
       			break;
   			default:
       			printf("%c is a consonant",ch);
       			break;
		}
    }
    else
    {
        printf("%c is not an alphabet.\n",ch);
    }
     return 0;
}
