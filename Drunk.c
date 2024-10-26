#include <stdio.h>
int main(void) { 
    int t,x; 
    scanf("%d",&t); 
    for(int i=0;i<t;i++)
    { 
        scanf("%d",&x); 
        if(x%2==0) printf("%d\n",x); 
        else printf("%d\n",x+2); 
    }
}

