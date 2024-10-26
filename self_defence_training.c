// #include<stdio.h>
//  int main()
//  {
//     int i,t,n,a,b,c,count1=0,count2=0,count3=0,count=0,sum=0;
//      scanf("%d",&t);
//     for(i=0;i<t;i++)
//     {
//        scanf("%d",&n);
//        int arr[n];
//         for(i=0;i<n;i++)        {
            
//              scanf("%d",&arr[i]); }
//            for(i=0;i<n;i++){
//              if(arr[i]>=10 && arr[i]<=60)
//             {
//                  count++;
//            } 
            
//         }
//      }
//      //sum=count1+count2+count3;
//      printf("%d",count);
//  }
// #include <stdio.h>

// int main(void) {
	
// 	int t,i,count,n;
	
// 	scanf("%d",&t);
// 	for(i=0;i<t;i++){
// 	    count = 0;
	   
	    
// 	    scanf("%d",&n);
	    
// 	    int a1[n];
	    
	    
// 	    for(i = 0 ; i < n ; i++){
// 	           scanf("%d",&a1[i]);
// 	    }
// 	    for(i = 0; i < n ; i++){
// 	        if(a1[i] >= 10 && a1[i] <= 60){
// 	            count++;
// 	        }
// 	    }
// 	    printf("%d\n",count);

	   
// 	}
// 	return 0;
// }

#include <stdio.h>

int main(void) {
	// your code goes here
	int t,i,count,n;
	
	scanf("%d",&t);
	
	
	
	while(t--){
	    count = 0;
	    //enter women number 
	    
	    scanf("%d",&n);
	    
	    int a1[n];
	    
	    //input data women age
	    for(i = 0 ; i < n ; i++){
	           scanf("%d",&a1[i]);
	    }
	    
	    //find the all eligible ages
	    for(i = 0; i < n ; i++){
	        if(a1[i] >= 10 && a1[i] <= 60){
	            count++;
	        }
	    }
	    
	    //print number of women
	    printf("%d\n",count);

	   
	}
	return 0;
}

