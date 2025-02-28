#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int t,n,num;
    scanf("%d",&t);
    scanf("%d",&n);
    for(int i=1;i<=t;i++){
        num = n*i;
         printf("%d ",num);
    }
   
    return 0;
}