#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,num;
    scanf("%d",&n);
   for(int i=n;i>=1;i--){
       num = ((i*2)-1);
       if(i==1){
           printf("%d.",num);
       }
       else{
           printf("%d ",num);
       }
   }
    return 0;
}