#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    long long int num;

    scanf( "%lld", &num );
    int numberOfGoodDigit = 0;

    for (int i = 0; i < 20; i++)
    {
        int digit = num % 10;
        num /= 10;

        if (digit == 4 || digit == 7)
        {
            numberOfGoodDigit++;
        }
        
    }

    if (numberOfGoodDigit == 4 || numberOfGoodDigit == 7)
    {
        printf( "YES" );
    }
    else{
        printf( "NO" );
    }
    
    

    return 0;
}