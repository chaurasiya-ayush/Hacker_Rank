#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a , b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    c = a-b;
    c = c>>31;
    if(c&1){
        printf("%d",a);
    }
    else{
        printf("%d",b);
    }
    
    
    return 0;
}