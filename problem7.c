#include<stdio.h>
#include <float.h> 
#include <math.h>
#include <stdbool.h>
#include <string.h>
int main()
{
	char strA[100],strB[100];
	int i,len,j,time;
	scanf("%d",&time);
	getchar();
	while(time--)
	{
		gets(strB);
		len=strlen(strB);
		strA[0]=strB[0];
		for(i=1,j=1;i<len-1;i++)
		{
			if(strB[i]!=strB[i+1])
				strA[j++]=strB[i];
			else if(strB[i]==strB[i+1])
			{
				strA[j++]=strB[i];
				i++;
			}
		}
		strA[j++]=strB[len-1];
		strA[j]='\0';
		puts(strA);
	}
}
