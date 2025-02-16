/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int side,sidea,sideb,sidec,sided,degreea,degreeb,degreec,degreed;
scanf("%d",&side);
if(side>=0 && side<=4){
    if(side==4){
        scanf("%d",&sidea);
         scanf("%d",&sideb);
         scanf("%d",&sidec);
        scanf("%d",&sided);
        scanf("%d",&degreea);
        scanf("%d",&degreeb);
        scanf("%d",&degreec);
        scanf("%d",&degreed);
        if(sidea>0 && sideb>0 && sidec>0 && sided>0 && degreea>0 && degreeb>0 &&  degreec>0 &&  degreed>0 &&((degreea+degreeb+degreec+degreed)==360) &&(degreea<180 || degreeb<180 || degreec<180)){
        if(sidea==sideb && sideb==sidec && sidec == sided && sided==sidea && degreea==90 && degreeb==90 && degreec==90 && degreed==90){
            printf("Square");
        }
        else if(sidea==sidec && sideb==sided &&  degreea==90 && degreeb==90 && degreec==90 && degreed==90 ){
            printf("Rectangle");
        }
        else if(sidea==sideb && sideb==sidec && sidec == sided && sided==sidea && degreea==degreec && degreeb==degreed){
            printf("Rhombus");
        }
        else if(sidea==sidec && sideb==sided && degreea==degreec && degreeb==degreed ){
            printf("Parallelogram");
        }
            else{
                printf("Invalid Figure");
            }
    }
        else{
            printf("Invalid Figure");
        }
    }
    if(side==3){
      scanf("%d",&sidea);
         scanf("%d",&sideb);
         scanf("%d",&sidec);
        scanf("%d",&degreea);
        scanf("%d",&degreeb);
        scanf("%d",&degreec);
        if((sidea>0 && sideb>0 && sidec>0  && degreea>0 && degreeb>0 &&  degreec>0) &&
        (((sidea+sideb)>sidec) && ((sideb+sidec)>sidea) && ((sidea+sidec)>sideb)) && ((degreea+degreeb+degreec+degreed)==180) && (degreea<90 ||degreeb<90 || degreec<90)){
            
        
        if(degreea==60 && degreeb==60 && degreec==60){
            if(sidea==sideb && sideb==sidec && sidec == sidea ){
            printf("Equilateral Triangle"); 
            }
            else{
                 printf("Invalid Figure");
            }
        }
            else if((sidea==sideb && degreea==degreeb && sidec!=sideb) || (sideb==sidec && degreec==degreeb && sidec!=sidea) || (sidec==sidea && degreec==degreea && sidea!=sideb)){
                printf("Isosceles Triangle");
            }
            else if((sidea!=sideb && sideb!=sidec && sidec != sidea  && degreea!=degreeb && degreeb!=degreec && degreec!=degreea)){
                printf("Scalene Triangle");
            }
       
        else{
             printf("Invalid Figure");
        }
    
    }
        else{
            printf("Invalid Figure");
        }
    }
    else if(side==0){
        printf("Circle");
    }
}
    else{
        printf("Invalid Figure");
    }

    return 0;
}