#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num;
    scanf("%d",&num);
    num = num & (num-1);
    printf("%d",num);
    return 0;
}