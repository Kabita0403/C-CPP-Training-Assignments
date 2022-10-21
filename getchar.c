#include<stdio.h>
#include<string.h>

int main()
{
    char str[20];
    int n=0, i=5;
    int ch;
    while ((ch=getchar())!='\n');
    if(i<n){
         str[i++]=ch;
         //str[5]='\0';
         printf("%s",str);
    }
    for(ch='A'; ch<='Z'; ch++)
    putchar(ch);

    return 0;
}


//#include <stdio.h>

/*int main()
{

	
	char ch = '1';
	for (ch = '1'; ch <= '9'; ch++)
		putchar(ch);

	return (0);
} */

