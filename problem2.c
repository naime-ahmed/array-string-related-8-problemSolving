#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>

int main(){

    int num;
    scanf( "%d", &num );

    int nums[num];
    int largeNum = 0;
    int sum = 0;

    for (int i = 0; i < num; i++)
    {
        scanf( "%d", &nums[i] );
    }

    for (int i = 0; i < num; i++)
    {
        sum += nums[i];
        if (nums[i]> largeNum)
        {
            largeNum = nums[i];
        }
        
        // printf( "%d ", nums[i] );
    }
    int totalOfAllNum = largeNum * num;
    int shouldAdd = totalOfAllNum - sum;

    printf( "%d", shouldAdd );
    
    

    return 0;
}