#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    if(((num1^num2)==-1)){
        printf("YES");
    }
    else{
        printf("NO");
    }
    return 0;
}