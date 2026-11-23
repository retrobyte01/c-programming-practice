#include <stdio.h>
int main() {
    int range;
    printf("Enter a range:\n");
    scanf("%d", &range);

    for(int i=2; i<=range; i++){
        int count=0;
        for(int j=2; j<i; j++){
            if(i%j==0)
                count++;
                break;
        }
        if(count==0)
            printf("%d\n", i);
    }
    return 0;
}