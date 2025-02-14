#include <stdio.h>

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int zero,first,second,third,fourth,fifth,sixth,seventh,
    eigth,ninth,position,value=0;
    scanf("%d",&zero);
    scanf("%d",&first);
     scanf("%d",&second);
     scanf("%d",&third);
     scanf("%d",&fourth);
     scanf("%d",&fifth);
     scanf("%d",&sixth);
     scanf("%d",&seventh);
     scanf("%d",&eigth);
     scanf("%d",&ninth);
    
     
    scanf("%d",&position);
    scanf("%d",&value);
    switch(position){
        case 0:
        zero +=value;
        break;
        case 1:
            first +=value;
            break;
        case 2:
            second +=value;
            break;
        case 3:
            third +=value;
            break;
        case 4: 
            fourth +=value;
             break;
        case 5:
            fifth +=value;
             break;
        case 6:
            sixth +=value;
             break;
        case 7:
            seventh +=value;
             break;
        case 8:
            eigth +=value;
             break;
        case 9:
            ninth +=value;
             break;
       
    }
    scanf("%d",&position);
    scanf("%d",&value);
    switch(position){
        case 0:
        zero +=value;
        break;
        case 1:
            first +=value;
            break;
        case 2:
            second +=value;
            break;
        case 3:
            third +=value;
            break;
        case 4: 
            fourth +=value;
             break;
        case 5:
            fifth +=value;
             break;
        case 6:
            sixth +=value;
             break;
        case 7:
            seventh +=value;
             break;
        case 8:
            eigth +=value;
             break;
        case 9:
            ninth +=value;
             break;
       
    }
    scanf("%d",&position);
    scanf("%d",&value);
    switch(position){
        case 0:
        zero +=value;
        break;
        case 1:
            first +=value;
            break;
        case 2:
            second +=value;
            break;
        case 3:
            third +=value;
            break;
        case 4: 
            fourth +=value;
             break;
        case 5:
            fifth +=value;
             break;
        case 6:
            sixth +=value;
             break;
        case 7:
            seventh +=value;
             break;
        case 8:
            eigth +=value;
             break;
        case 9:
            ninth +=value;
             break;
       
    }
    if(zero>9){
       zero %= 10;
    }
    if(first>9){
       first %= 10;
    }
    if(second>9){
       second %=10;
    }
    if(third>9){
       third %= 10;
    }
    if(fourth>9){
       fourth %= 10;
    }
    if(fifth>9){
       fifth %= 10;
    }
    if(sixth>9){
       sixth %= 10;
    }
    if(seventh>9){
       seventh %= 10;
    }
    if(eigth>9){
       eigth %= 10;
    }
    if(ninth>9){
       ninth %=10;
    }
    printf("%d %d %d %d %d %d %d %d %d %d",
    zero,first,second,third,fourth,fifth,sixth,seventh,eigth,ninth);
    return 0;
}