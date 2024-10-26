#include <stdio.h>
int main() {
    int t,a,b;
    scanf("%d", &t);
  for(int i=0;i<t;i++)
    {   
        scanf("%d %d", &a, &b);
        if (((a+b)%2 == 0) || ((a-b)%2 == 0)) {
            printf("Janmansh\n");
        }
        else {
            printf("Jay\n");
        }
    }
    
    return 0;
}
