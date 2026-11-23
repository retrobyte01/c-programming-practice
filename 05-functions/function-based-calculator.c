#include <stdio.h>
int add(int x, int y){
    return x+y;
}

int subtract(int x, int y){
    return x-y;
}

int multiply(int x, int y){
    return x*y;
}

int divide(int x, int y){
    if(y==0){
        printf("Division not possible");
        return 0;
    }
    else
        return x/y;
}

int modulus(int x, int y){
    if(y==0){
        printf("Modulus not possible");
        return 0;
    }
    else
        return x%y;    
}

int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The addition is %d, subtraction is %d, multiplication is %d, division is %d and the modulus is %d", add(a,b), subtract(a,b), multiply(a,b), divide(a,b), modulus(a,b));
    return 0;
}