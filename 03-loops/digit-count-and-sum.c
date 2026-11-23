#include <stdio.h>
int main() {
    int n, unitdigit, sum=0, count=0;
    printf("Enter a number:\n");
    scanf("%d", &n);
    int num = n;
    while(n!=0){
        unitdigit = n%10;
        sum = sum + unitdigit;
        n = n/10;
        count++;
    }
    printf("The number of digits and the sum of digits of the number %d are %d and %d respectively ", num, count, sum);
    return 0;
}