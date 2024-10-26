#include<stdio.h>
#include<string.h>
int main(){
    char str1[15],str2[15];
    int n,i,j,len=0,k;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s",&str1[i]);
    }
    for(i=0;str1[i]!='\0';i++ )
    {
        len++;
    }
    for(j=0,i=len-1;i>=0;i--,j++)
    {
        str2[j+len]=str1[i];
    }
    str2[j]='\0';
    for(i=0;i<n;i++)
    {
        if(str1[i]>=48 && str1[i]<=57)
        {
            int d=strcmp(str1,str2);
        }
    }
       
    //puts(str2);
    int d;
    for( k=0;k<n;k++){
    if(d==0)
    {
        printf("wins\n");
    }
    else{
        printf("loses\n");
    }
    }
}