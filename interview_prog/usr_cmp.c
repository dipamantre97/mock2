#include "header.h"
#define SIZE 10

static int count=0;

int usr_cmp(char *str1, char *str2)
{
	if(*str1== '\0' && *str2== '\0')
		return count;  // Same
	if(*str1== *str2)
	{	
		str1++;
		str2++;
		count++;
		return usr_cmp(str1,str2);
	}
	else 
		return -1; // Not same
}
 
void get_str()
{
	char str1[SIZE], str2[SIZE];
	int (*fptr)(char*,char*)= &usr_cmp;
	printf("\n var is even... Checking string...\n");
	printf("\n Enter string 1:: ");
	scanf("%[^\n]s",str1);
	printf("\n Enter string 2:: ");
	scanf(" %[^\n]s",str2);
		
	if((*fptr)(str1,str2)>0)
		printf("\n Strings are same");
	else
		printf("\n Strings are not same");

}
