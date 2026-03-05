#include <stdio.h>

int main(void)
{
    int choice = 0;

    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Substract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");

    printf("Enter Choice: ");
    scanf("%d", &choice);

    printf("Choice: %d\n", choice);

    if (choice > 4 || choice < 0)
    {
        printf("Invalid Choice\n");
    }
    else if (choice == 0)
    {
        printf("Bye!\n");
        return (0); 
    }
    else 
    {
        printf("You selected option %d\n", choice);
    }

    return (0);
}