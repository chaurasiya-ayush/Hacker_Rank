#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    int num1,num2,num3;
    scanf("%d",&num1);
    scanf("%d",&num2);
    scanf("%d",&num3);
    if(num1>num2){
        if(num1>num3){
            printf("The largest number is : %d",num1);
        }
        else{
            printf("The largest number is : %d",num3);
        }
    }
    else{
        //num1<num2
        if(num2>num3){
            printf("The largest number is : %d",num2);
        }
        else{
            printf("The largest number is : %d",num3);
        }
    }
    return 0;
}