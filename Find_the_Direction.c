#include <stdio.h>

int main(void) {
int t,a,i;
scanf("%d",&t);
for( i=0;i<t;i++)
{
    scanf("%d",&a);
    if(a%4==0)
    {
        printf("North\n");
    }else if(a%4==1)
    {
        printf("East\n");
    }else if(a%4==2)
    {
        printf("South\n");
    }else
    {
        printf("West\n");
    }
}    
	
}
