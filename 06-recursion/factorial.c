#include <stdio.h>
int fact(int n){
    if(n == 0 || n == 1)
        return 1;
    return n * fact(n-1);
}

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("The factorial of %d is %d", a, fact(a));    
    return 0;
}