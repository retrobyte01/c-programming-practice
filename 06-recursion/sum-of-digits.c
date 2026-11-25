#include <stdio.h>
int sumofdigits(int n){
    if(n == 0)
        return 0;
    return (n % 10) + sumofdigits(n/10);
}

int main() {
    int a;
    printf("Enter a number:\n");
    scanf("%d", &a);
    printf("The sum of digits of %d is %d", a, sumofdigits(a));    
    return 0;
}