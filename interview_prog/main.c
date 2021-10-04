#include "header.h"

int main()  
{     
	
	 var=display_arr();
	printf("\n Data in var: %d\n", var);
	
	
 
	if(var%2==0)// Even
		get_str();

	else  // ODD
		create_tree();
		
         var_div();
	
	
	printf("\n\n completed task...\n");
	
	return 0;    
} 
