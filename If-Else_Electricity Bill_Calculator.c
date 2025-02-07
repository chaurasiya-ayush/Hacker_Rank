#include <stdio.h>

int main() {

      
    int units;
    float amount;
    scanf("%d",&units);
    if(units>=0){
        
        if(units > 300){
            amount = (((units-300)*10) +1400 +500);
        }
        else if(units <=300 && units >100){
             amount = (((units-100)*7) +500); 
        }
        else if(units <=100){
             amount = (units)*5;
        }
        //amount section
        if(amount <=1200){
            amount = (amount - (amount * 0.1));
        }
        printf("The electricity bill is: %0.2f.",amount);
    }
    else{
        printf("Invalid Input!");
    }
    return 0;
}