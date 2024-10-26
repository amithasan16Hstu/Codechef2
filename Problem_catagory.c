#include<stdio.h>
int main()
{
    int i,x,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d",&x);
        if(x<100)
        {
            printf("Easy\n");
        }
        else if(x<200)
        {
            printf("Medium\n");
    }
    else
    {
        printf("Hard\n");
    }
    }
}