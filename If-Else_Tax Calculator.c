#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    float twentyper,fiveper,value,amount;
    scanf("%f",&value);
    twentyper = 500000 * 0.2;
    fiveper = 250000* 0.05;
  if(value>=0){
      
    if(value>1000000){
      amount = ( (value-1000000)*0.3) + twentyper + fiveper;
    }
    else if(value>500000 && value<=1000000){
        amount = ((value - 500000)*0.2) + fiveper;
    }
    else if(value>250000 && value<=500000){
        amount = (value- 250000)*0.05;
    }
    else{
        amount =0.00;
    }
    printf("%0.2f",amount);
  }
    else{
        printf("INVALID");
    }
    return 0;
}