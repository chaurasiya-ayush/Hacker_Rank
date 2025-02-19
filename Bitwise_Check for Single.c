#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    if(n==0){
        printf("-1");
    }
    else if((n&(n-1))==0 ){
        printf("1");
    }
    else{
        printf("-1");
    }
    return 0;
}