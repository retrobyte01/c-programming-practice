#include <stdio.h>
int main() {
    int a, b, x, y, remainder,lcm,gcd;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);

    x = a;
    y=b;

    while(b!=0){
        remainder=a%b;
        a=b;
        b=remainder;
    }

    gcd = a;

    if(x==0 || y ==0)
        lcm=0;
    else
        lcm=x*y/gcd;

    printf("GCD = %d\n", gcd);
    printf("LCM = %d\n", lcm);
    return 0;
}