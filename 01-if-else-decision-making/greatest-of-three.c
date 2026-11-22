#include <stdio.h>
int main() {
    int n1,n2,n3;
    printf("Enter number 1:\n");
    scanf("%d", &n1);
    printf("Enter number 2:\n");
    scanf("%d", &n2);
    printf("Enter number 3:\n");
    scanf("%d", &n3);

    if(n1>n2){
        if(n1>n3)
            printf("%d is the greatest number", n1);
        else
            printf("%d is the greatest number", n3);
            
    }
    else if(n2>n1){
        if(n2>n3)
            printf("%d is the greatest number", n2);
        else
            printf("%d is the greatest number", n3);
    }
    else
        printf("%d is the greatest number", n3);
    return 0;
}