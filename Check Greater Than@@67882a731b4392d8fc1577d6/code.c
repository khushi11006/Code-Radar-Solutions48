#include <stdio.h>

int main() {
    int num1;
    scanf("%d",&num1);
    int num2;
    scanf("%d",&num2);

    if(num1>num2){
        printf("True %d\n",num1,num2);
    }
    else{
        printf("False %d\n",num1,num2);
    }
    return 0;
}