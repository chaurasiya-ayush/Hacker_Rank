#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int num;
    scanf("%d",&num);
    if(num==0){
        printf("No");
    }
    else if((num&(num+1))==0){
        printf("Yes");
    }
    else{
        printf("No");
    }
    return 0;
}