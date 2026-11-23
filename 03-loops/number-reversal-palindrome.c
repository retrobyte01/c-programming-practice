#include <stdio.h>
int main() {
    int original,unitdigit,rev=0,num;
    printf("Enter a number:\n");
    scanf("%d", &num);
    original = num;
    while(num!=0)
    {
        unitdigit = num%10;
        rev=rev*10 +unitdigit;
        num=num/10;
    }
    printf("The reverse of the number is %d\n", rev);
    if(rev==original)
        printf("Therfore the number is a palindrom number");
    else
        printf("Therefore it is not a palindrom number");
    return 0;
}

// n=124
// r= n / 10 = 12 
// r /10 = 1
// 
// r % 1  = 2
// n % 10 = 4