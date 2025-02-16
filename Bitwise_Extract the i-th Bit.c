#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
   int num,i;
    scanf("%d",&num);
    scanf("%d",&i);
    num = (num>>i)&1;
    printf("%d",num);
    return 0;
}