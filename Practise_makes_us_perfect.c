#include <stdio.h>

int main(void) {
	int arr[4],i,count=0;
	 for(i=0;i<4;i++){
	     scanf("%d",&arr[i]);
	     if (arr[i]>=10) 
         count++;;
	 }
	 printf("%d",count);
	return 0;
}

