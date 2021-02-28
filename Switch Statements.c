#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    switch ( num > 0)
    {
    case 1:
        printf("%d is a positive number.", num);
        break;

    case 0:
    switch ( num < 0)
    {
    case 0:
        printf("%d is a zero number.", num);
        break;
    case 1:
        printf("%d is a negative number.", num);
        break;
    }
    default:
        break;
    }
    return 0;
}
