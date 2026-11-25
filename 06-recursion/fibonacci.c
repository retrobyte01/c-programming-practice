#include <stdio.h>
int fibbonacci(int n){
    if(n == 0)
        return 0;
    else if(n == 1)
        return 1;

    return fibbonacci(n-1)+fibbonacci(n-2);
}

int main() {
    int a;
    printf("Enter number of terms:\n");
    scanf("%d", &a);

    for(int i = 0; i <= a; i++){
        printf("%d, ", fibbonacci(i));
    }
        
    return 0;
}