#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int k = (num1|num2);
    int j = (num1^num2);
    int answer = (k^j);
    printf("%d",answer);
    
    return 0;
}