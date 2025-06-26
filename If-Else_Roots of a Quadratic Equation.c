#include <stdio.h>
#include <math.h>
int main(){
    int a,b,c;
    scanf("%d %d %d",&a,&b,&c);
    double d = (b*b) - (4*a*c);
    double root1 = ((-b + sqrt(d))/(2.0*a));
    double root2 = ((-b - sqrt(d))/(2.0*a));
    if(d>0){
        printf("Roots: %.2lf, %.2lf\n",root1,root2);
 printf("Type: Real and Distinct\n");
    }
    else if(d==0){
        printf("Roots: %.2lf, %.2lf\n",root1,root2);
         printf("Type: Real and Equal\n");
    }
    else{
        d =-d;
        double real = (-b/(2.0*a));
        double complex = ((sqrt(d))/(2.0*a));
        printf("Roots: %.2lf + %0.2lfi, %.2lf - %.2lfi\n",real,complex,real,complex);
        printf("Type: Complex\n");
       }
}