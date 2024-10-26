#include <stdio.h>
int main(void) 
{
    int t;
    scanf("%d",&t);
    for(int i=0;i<t;i++)
    {
        int n,c,p,correct,incorrect,total;
        scanf("%d%d%d",&n,&c,&p);
        correct=c*3;
        incorrect=(n-c)*(-1);
        total=correct+incorrect;
        if(total<p)
        printf("FAIL\n");
        else if(total>=p)
        printf("PASS\n");
        
    }
	return 0;
}

