#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n,sum=0;
    scanf("%d",&n);
    
    for(int i=2;i<=n;){
        if(n%i==0){
            sum +=i;
            n=n/i;
        }
        else{
            ++i;
        }
    }
    printf("%d",sum);
    return 0;
}