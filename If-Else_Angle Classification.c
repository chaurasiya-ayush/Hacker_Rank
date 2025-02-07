#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int num,multiple;
    scanf("%d",&num);
   
        if(num%360==0 && num!=0 ){
            printf("Full Rotation");
            return 0;
        }
    
     multiple = num/360;
    num = num - 360*multiple;
   if(num>180){
       printf("Reflex Angle");
   }
     else if(num==180){
        printf("Straight Angle");
    }
    else if(num>90){
        printf("Obtuse Angle");
    }
    else if(num==90){
        printf("Right Angle");
    }
    else if(num>=0) {
        printf("Acute Angle");
    }
    
    
    return 0;
}
