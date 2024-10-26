#include<stdio.h>
int main()
{
    int a,b,c,x;
    scanf("%d %d %d %d",&a,&b,&c,&x);
    if(a==x || b==x || c==x)
    {
        printf("Yes\n");
    }
    else{
        printf("No\n");
    }
}