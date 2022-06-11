#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>


int main()
{
    int i, k, m=0, n=0;

    char str[100];
    scanf("%s", str);

    for(i=0; str[i] != '\0'; i++)
    {
        for(k=i-1; k>=0; k--)
        {
        if(str[i] == str[k])
         {
            n=1;
            break;
          }
        }
        if(n == 0)
        m++;
        n=0;
    }
    if(m%2 == 0){
    printf("CHAT WITH HER!\n");
    }
    else{
    printf("IGNORE HIM!\n");
    }

    return 0;
}