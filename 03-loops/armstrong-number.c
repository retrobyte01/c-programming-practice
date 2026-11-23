#include <stdio.h>
#include<math.h>
int main() {
    int n, count=0,result=0,n1,original,unitdigit;
    printf("Enter a number:\n");
    scanf("%d", &n);
    n1 = n;
    original = n;

    while(n!=0){
        count++;
        n = n/10;
    }

    while(n1!=0){
        unitdigit = n1%10;
        result = result + pow(unitdigit, count);
        n1 = n1/10;
    }

    if(result==original)
        printf("It is an armsrong no.");
    else
        printf("No");
    return 0;
}