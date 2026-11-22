#include <stdio.h>

int main() {
    int n;
    printf("Enter a month number:\n");
    scanf("%d", &n);

    switch(n) {
        case 1:
        case 3:
        case 4:
        case 5:
        case 6:
        case 7:
            if(n % 2 == 0)
                printf("30 days");
            else
                printf("31 days");
            break;

        case 8:
        case 10:
        case 12:
        case 9:
        case 11:
            if(n % 2 == 0)
                printf("31 days");
            else
                printf("30 days");
            break;
        case 2:
            printf("29 days");
            break;

        default:
            printf("Invalid month");
    }

    return 0;
}