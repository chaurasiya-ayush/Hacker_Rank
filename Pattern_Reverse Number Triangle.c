#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    scanf("%d",&n);
    int k=0;
    for(int i=1;i<=n;i++){
         k +=i;
       for(int j=1;j<=i;j++){
           
        printf("%d ",k-j+1);
       }
          printf("\n");
    }
  
    return 0;
}