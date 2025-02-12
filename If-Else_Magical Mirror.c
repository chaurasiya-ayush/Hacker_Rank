#include <stdio.h>
#include <stdbool.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num, cond1,cond2,cond3;
    scanf("%d",&num);
    cond1 = (num%2==0 && num>10);
    cond2 = (num%3==0 && num>15);
    cond3 = (num%7==0);
    if(num>0){
        if(cond1==true && cond2==true && cond3==true){
            printf("The verdict for the number %d is: SUPERNATURAL",num); 
        }
        else if((cond1==true && cond2==true && cond3!=true)||(cond1!=true && cond2==true && cond3==true) 
        || (cond1==true && cond2!=true && cond3==true)){
            printf("The verdict for the number %d is: MIRACULOUS",num);
        }
        else if(cond1==true || cond2==true || cond3==true){
           printf("The verdict for the number %d is: MAGICAL",num); 
        }
        else{
           printf("The verdict for the number %d is: NORMAL",num); 
        }
    }
    else{
      printf("The verdict for the number %d is: INVALID",num);  
    }
    return 0;
}