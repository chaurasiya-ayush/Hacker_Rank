#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,p,q;
    scanf("%d",&n);
  if(n>0){
       for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            if(i%2==0){
                p=0;
                q=1;
                if(j%2==0){
                   printf("%d",q); 
                }
                else{
                     printf("%d",p);
                }
                
            }
            else{
               p=1;
                q=0;
                if(j%2==0){
                   printf("%d",q); 
                }
                else{
                     printf("%d",p);
                }
            }
        }
        printf("\n");
    } 
  }
  else{
      printf("Shape Not Possible");
  }
    return 0;
}
