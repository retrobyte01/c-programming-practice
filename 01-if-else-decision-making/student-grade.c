
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter student's marks (0-100): ");
    scanf("%d", &marks);

    if (marks >= 90)
    {
        printf("Grade: A+");
    }
    else if (marks >= 80)
    {
        printf("Grade: A");
    }
    else if (marks >= 70)
    {
        printf("Grade: B");
    }
    else if (marks >= 60)
    {
        printf("Grade: C");
    }
    else if (marks >= 50)
    {
        printf("Grade: D");
    }
    else if (marks >= 35)
    {
        printf("Grade: E");
    }
    else
    {
        printf("Grade: F (Fail)");
    }

    return 0;
}
