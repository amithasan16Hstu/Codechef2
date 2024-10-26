#include<stdio.h>
int main()
{
    int n,x,i,count_even=0,count_odd=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        if(x%2==0)
        {
            count_even++;
        }
        else{
            count_odd++;
        }
    }
    if(count_even>count_odd)
    {
        printf("READY FOR BATTLE\n");
    }
    else{
        printf("NOT READY\n");
    }
}