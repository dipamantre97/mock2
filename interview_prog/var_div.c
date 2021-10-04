#include "header.h"
#define PATTERN_SIZE 5
int var;
void var_div()
{
	
	if(var%10 == 0)
	{
		goto pattern;
	}
	pattern:
	
	printf("\n printing Pattern: \n\n"); 
	
	for(int r=1;r<=5;r++)
	{
	for(int c=1;c<=5-r;c++)
	printf(" ");
        for(int c=1;c<=r;c++)
        
        printf("%c",c+96);
        
        printf("\n");
        }
 }
