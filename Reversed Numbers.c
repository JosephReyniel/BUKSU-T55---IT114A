#include <stdio.h>
#include <stdlib.h>

    int main()
{
   int num, remainder, reverse_num;

   printf("Input a numbers: ");
   scanf("%d", &num);

   while ( num > 0)
   {
      remainder = num%10;
      reverse_num = reverse_num*10 + remainder;
      num= num/10;
   }
   printf("The reversed number is %d",reverse_num);
     return 0;
}

