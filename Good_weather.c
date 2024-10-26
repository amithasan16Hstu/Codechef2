#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int a[10],i,count=0;
	    for(i=0;i<7;i++)
	    {
	        scanf("%d",&a[i]);
	    }
for(i=0;i<7;i++)
{
    if(a[i]==1)
    count=count+1;
}
if(count>3)
printf("YES\n");
else
printf("NO\n");

}
return 0;
}