#include <stdio.h>
int main(){
    int num1,num2;
    get char();
    char sign;
    scanf("%d %d %c",&num1,&num2,&sign);

    if( sign == '+'){
        printf("%d", num1+num2);
    }
    else if( sign == '-' ){
        printf("%d", num1-num2);
    }
    else if(sign == '*' ){
        printf("%d", num1*num2);
    }
    else if(sign == '/' ){
        printf("%d", num1/num2);
    }
    else{
        printf("error");
    }
    return 0;
}