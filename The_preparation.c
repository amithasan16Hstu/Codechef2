#include<stdio.h>
int main()
{
    int i,t,m,n,k;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&m,&n,&k);
        if(m>n*k)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}