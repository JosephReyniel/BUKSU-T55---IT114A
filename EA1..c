#include <stdio.h>
#include <stdlib.h>

int main()
{

    char name[100];
    int id;
    int math;
    int sci;
    int eng;
    int sum, average;
    int i;

    FILE * fptr, *fptr2;

    fptr = fopen("D:\\file.txt","w");


    if (fptr == NULL || fptr2 == NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("Enter student name: ");
    scanf("%s", &name);
    printf("Enter student ID: ");
    scanf("%d", &id);
    printf("Math: ");
    scanf("%d", &math);
    printf("Science: ");
    scanf("%d", &sci);
    printf("English: ");
    scanf("%d", &eng);

        fprintf(fptr,"Name: %s",name);
        fprintf(fptr,"\nID: %d",id);
        fprintf(fptr,"\nMath: %d",math);
        fprintf(fptr,"\nScience: %d",sci);
        fprintf(fptr,"\nEnglish: %d",eng);

    sum = math + sci + eng;
    average = (math + sci + eng)/3;

        fprintf(fptr,"\nTotal of your Grades: %d", sum);
        fprintf(fptr,"\nThe average of five subjects are: %d\n", average);


    fptr2 = fopen("D:\\file2.txt","w");
    {

    printf("Enter student name: ");
    scanf("%s", &name);
    printf("Enter student ID: ");
    scanf("%d", &id);
    printf("Math: ");
    scanf("%d", &math);
    printf("Science: ");
    scanf("%d", &sci);
    printf("English: ");
    scanf("%d", &eng);

        fprintf(fptr2,"Name: %s",name);
        fprintf(fptr2,"\nID: %d",id);
        fprintf(fptr2,"\nMath: %d",math);
        fprintf(fptr2,"\nScience: %d",sci);
        fprintf(fptr2,"\nEnglish: %d",eng);

    sum = math + sci + eng;
    average = (math + sci + eng)/3;

        fprintf(fptr2,"\nTotal of your Grades: %d", sum);
        fprintf(fptr2,"\nThe average of five subjects are: %d\n", average);

    }

    fclose(fptr);

    return 0;

}
