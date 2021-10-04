#include "header.h"

int display_arr()
{
int i=0,j=0,k=0, *ptr,var;
	char str1[10], str2[10];

	for(i=1;i<=4;i++)              
	{
		for(j=1;j<=3;j++)        
		{
			for(k=1;k<=2;k++)      
			{
				s.arr[i][j][k]=rand();  
			}
		}
	}
	printf("\n printing array:: \n");	  
	for(i=1;i<=4;i++)              
	{
		for(j=1;j<=3;j++)          
		{
			for(k=1;k<=2;k++)      
			{
				printf(" %d ",s.arr[i][j][k]);  
			}
			printf("\n");
		}
		printf("\n");
	}
	
	ptr=&s.arr[2][2][2];
	printf("\n var: %d\n",*ptr);
	
	var= *ptr;
	return var;
	
}
