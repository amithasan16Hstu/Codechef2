#include <stdio.h>

int main() {

	int t,x,y,z;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
	    scanf("%d %d %d",&x,&y,&z);
	    if(x%3==0){
	        printf("%d\n",((x*y)+((x-1)/3)*z));
	    }
	    else {
	       printf("%d\n",((x*y)+(x/3)*z));
	    }
	}
return 0;
}

