#include <stdio.h>
void prime(int a){
    int composite=0;
    for(int i=2; i<a; i++){
        if(a%i==0){
            composite++;
            break;
        }
    }
    if(composite==0)
        printf("It is a prime no.\n");
    else
        printf("It is not a prime no.\n");
}

void even(int a){
    if(a%2==0)
        printf("It is an even no.\n");
    else
        printf("It is not an even no.\n");
}

void palindrome(int a){
    int x = a,rev,unitdigit;
    while(a!=0){
        unitdigit=a%10;
        rev=rev*10+unitdigit;
        a=a/10;
    }
    if(rev==x)
        printf("It is a palindrome\n");
    else
        printf("It is not a palindrome\n");
}
int main() {
    int x;
    printf("Enter a number:\n");
    scanf("%d", &x);
    prime(x);
    even(x);
    palindrome(x);
    return 0;
}