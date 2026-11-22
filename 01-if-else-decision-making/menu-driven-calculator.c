
#include <stdio.h>
int main()
{
    int choice, a, b;
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("5. Modulus\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter the number 1: ");
    scanf("%d", &a);

    printf("Enter the number 2: ");
    scanf("%d", &b);

    if (choice==1)
    {
        printf("Addition = %d", a + b);
    }
    else if(choice==2)
    {
        printf("Subtraction = %d", a - b);
    }
    else if(choice==3)
    {
        printf("Multiplication = %d", a * b);
    }
    else if (choice==4)
    {
        if (b!=0)
            printf("Division = %f", a / b);
        else
            printf("Division by zero is not possible.");
    }
    else if(choice==5)
    {
        if (b != 0)
            printf("Modulus = %d", a % b);
        else
            printf("Modulus by zero is not possible.");
    }
    else
    {
        printf("Invalid choice!");
    }

    return 0;
}