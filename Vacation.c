#include<stdio.h>
int main()
{
    int i,x,y,z,t;
    scanf("%d",&t);
    for(i=0;i<t;i++)
    {
        scanf("%d %d %d",&x,&y,&z);
        if(x+y<z)
        {
            printf("PLANEBUS\n");
        }
        else if(x+y>z)
        {
            printf("TRAIN\n");
        }
        else if(x+y==z)
        {
            printf("EQUAL\n");
        }

    }
}