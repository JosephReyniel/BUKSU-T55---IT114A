#include <stdio.h>
#include <stdlib.h>

 int sumofarray(int a[],int n,int i)
 {
 	   if(i < n)
        return a[i]+sumofarray( a, n, ++i);

        return 0;

 }
int main()
{
    int a[10];
    int i,n,sum;

    printf("Enter the size of the array : ");
    scanf("%d", &n);

    for(i=0; i<n; i++)
    {

    printf("Enter element %d : ", i+1);
    scanf("%d", &a[i]);

    }

    sum=sumofarray(a,n,0);
     printf("sum of all array is :%d",sum);


}

