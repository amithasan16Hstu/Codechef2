#include <stdio.h>

int main(void) {
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    int x,m,d;
	    scanf("%d%d%d",&x,&m,&d);
	    if(x*m<x+d)
	    printf("%d\n",x*m);
	    else
	    printf("%d\n",x+d);
	}
	return 0;
}

