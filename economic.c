#include <stdio.h>

int main(void) {
	// your code goes here
	int t;
	scanf("%d",&t);
	while(t--)
	{
	    int n,count=0;
	    scanf("%d",&n);
	    int s[n],d[n];
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&s[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        scanf("%d",&d[i]);
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(s[i]==d[i])
	        count++;
	    }
	    printf("%d\n",count);
	}
	return 0;
}
