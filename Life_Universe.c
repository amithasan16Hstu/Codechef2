#include<stdio.h>
int main(){
	int n;
	while(1){	
		scanf("%d",&n);
		if(n!=42 && n<100){
			printf("%d\n",n);
		}	
		else
			break;
	}
}	