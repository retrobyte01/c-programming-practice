#include <stdio.h>
int max(int a, int b){
    int largest;
    if(a>b)
        largest = a;
    else
        largest = b;
    return largest;
}

int main() {
    int x,y;
    printf("Enter two numbers:\n");
    scanf("%d %d", &x, &y);
    printf("The maximum is %d", max(x,y));    
    return 0;
}