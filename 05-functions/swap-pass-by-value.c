#include <stdio.h>
void swap(int x, int y){
    int tmp = x;
    x = y;
    y = tmp;
    printf("The values stored locally inside function after swap are %d and %d\n", x ,y);
}
int main() {
    int a,b;
    printf("Enter two numbers:\n");
    scanf("%d %d", &a, &b);
    printf("The values inside main function before swap are %d and %d\n", a, b);
    swap(a,b);
    printf("The values inside main function after swap are %d and %d", a, b);
    return 0;
}