#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    char str[1001];

    scanf( "%s", &str );

    for (int i = 0; i < strlen(str); i++)
    {
        if (i == 0)
        {
            if (str[i]>='a' && str[i]<='z')
            {
                str[i] = str[i] - 32;
                continue;
            }
            
        }
        
    }

    printf( "%s", str );
    

    return 0;
}