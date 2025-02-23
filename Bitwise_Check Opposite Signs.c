#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b;
    scanf("%d",&a);
    scanf("%d",&b);
    a =(a>>31);
    b = (b>>31);
    (a!=b) ? printf("Yes"):printf("No");
    return 0;
}