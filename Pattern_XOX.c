#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
  if(n>=2){
       if(n%2==0){
        n = n+1;
    }
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
           if(j==(n+1)/2 || i== (n+1)/2){
               printf("x");
           }
            else{
                printf("o");
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