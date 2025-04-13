#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
    //PRINTING I
        for(int j=1;j<=n;j++){
            if(j==(n/2+1) || i==1 || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int k=1;k<=2;k++){
            printf(" ");
        }
    //PRINTING N
        for(int j=1;j<=n;j++){
            if(j==i || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
        //PRINTING N
        for(int j=1;j<=n;j++){
            if(j==i || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
       //PRINTING O
        for(int j=1;j<=n;j++){
           if(i==1 || i==n){
               if(j>=2 && j<=n-1){
                  printf("*");  
               }
               else{
                printf(" ");
            }
           }
           else{
               if(j==1 || j==n){
                    printf("*");
               }
               else{
                printf(" ");
            }
           }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
        //PRINTING V
       
        for(int j=1;j<=n;j++){
            if(j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int j=n-1;j>=1;j--){
            if(j==i){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         
         for(int k=1;k<=3;k++){
            printf(" ");
        }
        //PRINTING A
        
          for(int j=1;j<=n;j++){
              if(i==1){
                 if(j==1 || j==n){
                     printf(" ");
                 }
                 else{
                     printf("*");
                 }
              }
            else if(i==1 || i==(n/2+1) || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
        //PRINTING T
           for(int j=1;j<=n;j++){
            if(i==1  || j==(n/2+1)){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
         //PRINTING I
            for(int j=1;j<=n;j++){
            if(j==(n/2+1) || i==1 || i==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        for(int k=1;k<=2;k++){
            printf(" ");
        }
          //PRINTING O
         for(int j=1;j<=n;j++){
           if(i==1 || i==n){
               if(j>=2 && j<=n-1){
                  printf("*");  
               }
               else{
                printf(" ");
            }
           }
           else{
               if(j==1 || j==n){
                    printf("*");
               }
               else{
                printf(" ");
            }
           }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
           //PRINTING N
            for(int j=1;j<=n;j++){
            if(j==i || j==1 || j==n){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
         for(int k=1;k<=2;k++){
            printf(" ");
        }
        printf("\n");
    }
    return 0;
}