#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,sum=0;
    scanf("%d",&n);
 for(int i=1; i<=n/2 ;i++){
     if(n%i==0){
    sum +=i;
     }
 }
    if(sum==n){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}