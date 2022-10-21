#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *str;
    {
        char a = 'A';
        str = &a;
    }
    //a fallss out of scope
    //str is now a dangling pointer

    printf("%s", *str);
}
