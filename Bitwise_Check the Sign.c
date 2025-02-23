#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    n = ((n>>31)&1);
    if(n==0){
        printf("Positive");
    }
    else{
        printf("Negative");
    }
    
    return 0;
}