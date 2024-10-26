#include<stdio.h>
int main()
{
    int i,t,a,b;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d",&a,&b);
        int sum=a+b;
        if(sum%2==0)
        {
            printf("Bob\n");
        }
        else{
            printf("Alice\n");
        }
    }
}