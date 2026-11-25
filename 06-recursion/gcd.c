#include <stdio.h>
int gcd(int x, int y){
    if(y==0)
        return x;
    return gcd(y, x%y); 
}
int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    
    printf("The GCD of the numbers is: %d", gcd(a,b));
    return 0;
}