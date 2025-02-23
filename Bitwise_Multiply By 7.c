#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    scanf("%d",&n);
    n = ((n<<3)-n);
    printf("%d",n);
    return 0;
}