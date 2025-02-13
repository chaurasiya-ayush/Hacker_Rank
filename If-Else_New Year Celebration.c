#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int budget,num,food,decoration,music,extraexpense,totalcost;
    scanf("%d",&budget);
    scanf("%d",&num);
    scanf("%d",&food);
    scanf("%d",&decoration);
    scanf("%d",&music);
    scanf("%d",&extraexpense);
    
    
   
        totalcost = food*num +decoration+music+extraexpense;
        if(totalcost<=budget){
           if(num>5 && num<=50){
            if(decoration<(budget*0.3) || (food*num)<(budget*0.5)){
               if(num>25){
                   if(music>0){
                        printf("Celebration Approved");
                   }else{
                        printf("Celebration Denied");
                   }
               }
                else{
                    printf("Celebration Approved");
                }
                
               }
               else{
            printf("Celebration Denied");
                return 0;
            }
               
            }
            else{
            printf("Celebration Denied");
                return 0;
            }
        
        }
        else{
            printf("Celebration Denied");
        }
    
    return 0;
}