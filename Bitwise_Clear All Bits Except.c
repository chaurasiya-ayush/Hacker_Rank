#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,m;
    scanf("%d",&n);
    m = (n^(n-1));
    n = n&m;
    printf("%d",n);
    return 0;
}