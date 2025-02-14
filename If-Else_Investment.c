#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int age,income,risk;
    scanf("%d",&age);
     scanf("%d",&income);
     scanf("%d",&risk);
     if(age<30){
        if(risk==1 ||risk==2 || risk==3){
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
            return 0;
        }
    }
 
    else if(age>50 && income>75000){
        if(risk==3){
            //high
            printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
           
        }
         else if(risk==2 || risk ==1){
                printf("Low Risk Portfolio: Suitable for conservative investments.");
            }
    }
       
    else if(income<=30000){
if(risk==1){
    //low
     printf("Low Risk Portfolio: Suitable for conservative investments.");
}
        else if(risk==2){
            //moderate
             printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
        }
    else if(age>=30 && age<=50 && income<=75000){
        if(risk==2){
            //moderate
             printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
    }
   
    else if(age>=30 && age<=50 && income>75000){
       
         if(risk==1){
            //moderate
             printf("Medium Risk Portfolio: Balanced risk for moderate returns.");
        }
        else{
            //high
             printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
    }
    
    else if(age>50 && income>75000){
        if(risk==3){
            //high
             printf("High Risk Portfolio: Suitable for aggressive investors with high-risk tolerance.");
        }
    }
    else if(age>50 && income<75000){
        printf("Low Risk Portfolio: Suitable for conservative investments.");
    }
    return 0;
}