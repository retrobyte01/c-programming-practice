#include <stdio.h>
int power(int base, int exponent){
    int original=base;
    for(int i=0;i<exponent-1;i++){
        base=original*base;
    }
    return base;
}
int main() {
    int n,e;
    printf("Enter a number:\n");
    scanf("%d", &n);
    printf("Enter a exponent:\n");
    scanf("%d", &e);
    printf("The result is: %d", power(n,e));
    return 0;
}