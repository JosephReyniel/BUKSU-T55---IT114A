#include <stdio.h>
#include <stdlib.h>
#include <string.h>


int main()
{
    char str1[200];
    int n, i, vowels, consonants = 0;
    printf("Input a sentence: ");
    fgets(str1,sizeof(str1), stdin);
    printf("The original sentence:  ");
    puts(str1);
    n = 0;
    i = 0;

     while(str1[n] != '\0')
    {
        if(str1[n] == 'a'|| str1[n] == 'e' || str1[n] == 'i' || str1[n] == 'o' || str1[n] == 'u')
            str1[n] = str1[n] - 32;
        n++;
	}

	for(i=0;str1[i];i++)
    {
    	if((str1[i]>= 'A' && str1[i]<= 'Z' )|| (str1[i]>= 'a' && str1[i]<= 'z'))
    	{

            if(str1[i]=='a'|| str1[i]=='e'||str1[i]=='i'||str1[i]=='o'||str1[i]=='u'||str1[i]=='A'||str1[i]=='E'||str1[i]=='I'||str1[i]=='O' ||str1[i]=='U')
		      vowels++;
            else
             consonants++;
    	}

    }
    printf("Converting vowels into Uppercase: ");
    puts(str1);

    printf("Length of the string: %zu\n", strlen(str1));
    printf("Number of vowels in this string: %d\n", vowels);
    printf("Number of consonants in this string: %d", consonants);
    return 0;

    }
