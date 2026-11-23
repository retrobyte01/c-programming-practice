#include <stdio.h>
int main() {
    int range, n3, n1=0, n2=1,tmp;
    printf("Enter a range:\n");
    scanf("%d", &range);
    printf("%d, %d ", n1, n2);

    for(int i=2;i<range;i++){
        n3=n1+n2;
        printf(", %d ", n3);
        n1=n2;
        n2=n3;
    }

    return 0;
}