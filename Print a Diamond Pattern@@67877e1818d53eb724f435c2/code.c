// Your code here...
#include<stdio.h>
int main(){
    int num;
    scanf("%d",&num);

    for(int i=0;i<num;i++){
        for(int j=0;j<num-i;j++){
           printf(" ");
        }
        for(int j=0;j<(2*i-1);j++){
           printf("*");
        } 
        printf("\n");
    }

    for(int i = num;i>0;i--){
        for(int j = 0;j<num-i;j++){
            printf(" ");
        }
        for(int j=0;j<(2*i-1);j++){
            printf("*");
        }
         printf("\n");
    }
}