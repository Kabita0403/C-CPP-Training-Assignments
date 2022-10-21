#include<stdio.h>
#include<string.h>

int main()
{
    char *ptr = "hello";
    printf("%c\n", (char)*ptr);
    const char C= 'a';
    printf("%c\n",C);
    char name[10] = "kabita";
    printf("%s\n",name);
    name[0]= 'K';
    printf("%s\n",name);
    printf("%10s\n",name);
    printf("%.4s",name);
    char arr[20];
    scanf("%9s",arr);
    printf("%s\n",arr);
}