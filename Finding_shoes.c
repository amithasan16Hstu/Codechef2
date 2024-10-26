#include <stdio.h>

int main() {
	int t,n,m,c;
	scanf("%d",&t);
	for(int i=0;i<t;i++)
	{
	    scanf("%d %d",&n,&m);
	    if(m<=n)
	    {
	         c=(2*n)-m;
	        printf("%d\n",c);
	    }
	    else
	    printf("%d\n",n);
	}
	return 0;
}

