#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    scanf("%d",&n);
    while(n!=1){
        if(n%2==0){
            printf("%d -> ",n);
            n=n/2;
            
        }
        else{
            printf("%d -> ",n);
            n = 3*n +1;
            
        }
    }
    printf("%d",n);
    return 0;
}