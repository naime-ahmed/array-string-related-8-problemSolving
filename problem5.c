#include<stdio.h>
// #include<conio.h>
void main()
{
    int num;
    
    scanf( "%d", &num );

    char str[num+1];

    scanf( "%s", str );

    int i,valueOfLetters[26]={0},countAlphabet=0;

	for(i=0;str[i]!='\0';i++)
	{
		if('a'<=str[i] && str[i]<='z')
		{
			countAlphabet+=!valueOfLetters[str[i]-'a'];
			valueOfLetters[str[i]-'a']=1;
		}
		else if('A'<=str[i] && str[i]<='Z')
		{
			countAlphabet+=!valueOfLetters[str[i]-'A'];
			valueOfLetters[str[i]-'A']=1;
		}
	}
	if(countAlphabet==26)
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
	// getch();
}