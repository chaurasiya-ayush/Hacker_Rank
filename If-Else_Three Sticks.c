
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=1 ){
        
    printf("Lengths: [%d, %d, %d]\n",a,b,c);
   
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b)){
        if(a==b && b==c){
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
        }
        else if(a==b || b==c || c==a ){
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
        }
        else {
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    }
    
    else{
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    }
    
    return 0;
}
#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>=1 ){
        
    printf("Lengths: [%d, %d, %d]\n",a,b,c);
   
    if(((a+b)>c) && ((b+c)>a) && ((c+a)>b)){
        if(a==b && b==c){
            printf("Type: Equilateral\n");
            printf("All sides are of the same length.");
        }
        else if(a==b || b==c || c==a ){
            printf("Type: Isosceles\n");
            printf("Exactly two sides are equal.");
        }
        else {
            printf("Type: Scalene\n");
            printf("All sides are of different lengths.");
        }
    }
    
    else{
        printf("Type: Invalid\n");
        printf("Cannot form a valid shape.");
    }
    }
    
    return 0;

}