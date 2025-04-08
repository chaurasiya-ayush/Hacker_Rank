#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    if(n>=3){
       if(n%2!=0){
        n =n+1;
    }
    for(int i=1;i<=n;i++){
     if(i<=n/2){
        for(int k=1;k<=(n/2-i);k++){
            printf(" ");
           } 
           for(int j=1;j<=i;j++){
             if(j==1 || j==i){
                   printf("*");
             }
             else{
                 printf(" ");
             }
           }
           
           for(int j=2;j<=(i);j++){
               if(j==i){
                   printf("*");
               }
               else{
                   printf(" ");
               }
           }
           printf("\n");
     }
     else{
         for(int j=1;j<=(n);j++){
             if(j==(n+1)/2){
                 printf("*");
             }
             else{
                 printf(" ");
             }
         }
         printf("\n");
     }
     
    }
    
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}


