#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int arrayElements, rotationTimes;

    scanf( "%d%d", &arrayElements, &rotationTimes );

    int mainArr[arrayElements];

    for (int i = 0; i < arrayElements; i++)
    {
        scanf( "%d", &mainArr[i] );
    }

    for (int i = 0; i < rotationTimes; i++)
    {
        int j, first;

        first = mainArr[0];

        for ( j = 0; j < arrayElements-1; j++)
        {
            mainArr[j] = mainArr[j + 1];
        }
        mainArr[j] = first;
    }
    

    for (int i = 0; i < arrayElements; i++)
    {
        printf( "%d ", mainArr[i]);
    }
    


    return 0;
}