#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE * fptr;

    int i;
    int line;
    char fname[20];
    char str[100];

    printf("Input the file location: ");
    scanf("%s", &fname);

    fptr = fopen("D:\\text.txt", "a");

    if(fptr==NULL)
    {
        printf("Error!");
        exit(1);
    }

    printf("\nEnter the number of lines to be written: ");
    scanf("%d", &line);

     printf("The words are: \n",i);
    for(i = 0; i <6;i++)
    {
    fgets(str, sizeof str, stdin);
    fputs(str, fptr);
  }

    fclose(fptr);

    return 0;

}
