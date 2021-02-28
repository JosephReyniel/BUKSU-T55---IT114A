#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a, b, sum, difference, product, quotient;

   printf("Enter two numbers: ");
   scanf("%d %d", &a, &b);

   sum = a + b;
   printf("The answer of %d + %d is %d \n", a, b, sum);

   difference = a - b;
   printf("The answer of %d - %d is %d \n", a, b, difference);

   product = a * b;
   printf("The answer of %d x %d is %d \n", a, b, product);

   quotient = a / b;
   printf ("The answer of %d / %d is %d \n", a, b, quotient);

    return 0;
}
