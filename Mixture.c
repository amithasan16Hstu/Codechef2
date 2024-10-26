#include<stdio.h>
int main()
{
    int A,B,n,t,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&A,&B);
        if(A>0 && B>0)
        {
            printf("Solution\n");
        }
        else if(A==0)
        {
            printf("Liquid\n");
        }
        else if(B==0)
        {
            printf("Solid\n");
        }
    }

}