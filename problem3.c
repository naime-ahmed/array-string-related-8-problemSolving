#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>
#include <stdlib.h>

void removeDuplicates(char str[])
{
    int n = strlen(str);
    char prev = '\0';
    int k = 0;
 
    for (int i = 0; i < n; i++)
    {

        if (prev != str[i])
        {

            str[k++] = str[i];
        }
 
        prev = str[i];
    }
 
    str[k] = '\0';
}

int main(){

    int num;

    scanf( "%d", &num );

    char colors[51];

    scanf( "%s", colors );

    removeDuplicates(colors);


    printf( "%d", num - strlen(colors) );



    return 0;
}