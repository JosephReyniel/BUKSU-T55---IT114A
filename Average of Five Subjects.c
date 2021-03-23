#include <stdio.h>
#include <stdlib.h>

int grades( int, int, int, int, int);
int main ()
{
    int G1, G2, G3, G4, G5, sum, average;

    printf("Input your Grades in Five Subjects: ");
    scanf("%d %d %d %d %d", &G1, &G2, &G3, &G4, &G5);
    sum = G1 + G2 + G3 + G4 + G5;
    printf("Total of your Grades: %d\n", sum);
    average = grades (G1, G2, G3, G4, G5);
    printf("The average of five subjects are: %d", average);

return 0;
}
 int grades(int a, int b, int c, int d, int e)
 {
     int result;
     result = (a + b + c + d + e) /5;
     return result;
 }
