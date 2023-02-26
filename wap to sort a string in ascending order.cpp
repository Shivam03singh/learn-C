#include <stdio.h>
#include <string.h>
int main()
{
	int count;
	char str[25][25];

	puts("Enter the number of strings : ");
	scanf("%d",&count);
	puts("Enter strings : ");
	for (i=0; i<=count, i++){
		gets(str[i]);
	}
	for (i=0; i<=count, i++){
		for(j=0; j<=count; j++){
			if (strcmp(str[i],str[j]>0)){
				char temp[25];
				strcpy(temp,str[i]);
				strcpy(str[i],str[j]);
				strcpy(str[j],temp;)
			}
		}
	}
	printf("Sorted String");
	for (i=0; i<=count; i++){
		puts(str[i]);
	}
}