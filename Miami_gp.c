// #include<stdio.h>
// int main()
// {
//     int t,x,y,i,j,k,sum=0;
//     scanf("%d",&t);
//     for(i=0;i<t;i++)
//     {
//         scanf("%d %d",&x,&y);
//         x=x+107/100;
//         if(y<=x)
//         {
//             printf("Yes\n");
//         }
//         else
//         {
//             printf("No\n");
//         }
//     }
// }
#include <stdio.h>

 int main(void) {
	int t,i;
	scanf("%d",&t);
for(i=0;i<t;i++)
	{
	    int x,y;
	    scanf("%d%d",&x,&y);
	    if(y<=1.07*x)
	    {
	        printf("YES\n");
	        
	    }
	    else{
	        printf("NO\n");
	        
	    }
	}
	return 0;
}

