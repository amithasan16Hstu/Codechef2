#include<stdio.h>
int main()
{
    int t,a,b,c,i;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
scanf("%d %d %d",&a,&b,&c);
if(a>0 && b>0 && c>0){
if(a>=b && a>=c)
{
    printf("%d\n",a);
}
else if(b>=a && b>=c)
{
    printf("%d\n",b);
}
else
{
    printf("%d\n",c);
}
    }
}
}