#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    if(n>=2){
        for(int i=1;i<=n;i++){
        for(int k=1;k<=(n-i);k++){
            printf(" ");
        }
        for(int j=1;j<=(i*2-1);j++){
            printf("*");
        }
        printf("\n");
    }
    }
    else{
        printf("Shape Not Possible");
    }
    return 0;
}