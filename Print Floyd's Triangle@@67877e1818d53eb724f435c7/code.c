#include <stdio.h>

int main() {
    int num;
    scanf("%d",&num);

    for(int i=num;i>=1;i--){
        for(int j=i;j<=num;j++){
            printf("%d ", j );
        }
        printf("\n");
    }
    return 0;
}