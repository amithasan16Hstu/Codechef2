#include <stdio.h>

int main(void) {
    char c1,c2,c3;
	scanf("%c %c" , &c1 , &c2);
	
	if(c1==c2)
	{
	    printf("%c\n" , c1);
	}
	
	else if(c1=='R' && c2=='B')
	{
	    printf("R\n");
	}
	
	else if(c1=='G' && c2=='R')
	{
	    printf("R\n");
	}
	
	else if(c1=='B' && c2=='G')
	{
	    printf("B\n");
	}
	
else if(c1=='G' && c2=='B')
	{
	    printf("B\n");
	}
	
	else if(c1=='R' && c2=='G')
	{
	    printf("R\n");
	}
	
	else
	{
	    printf("R\n");
	}
	
	
	return 0;
}

