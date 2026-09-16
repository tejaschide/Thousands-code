#include <stdio.h>

int main()
{
    int a, b, subtraction;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    subtraction = a - b;

    printf("Subtraction = %d", subtraction);

    return 0;
}
