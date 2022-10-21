#include<stdio.h>

#include<string.h>

int main(){

    char str[100]="this is Rak, with c and C++ Python";
    char *sub;
    sub=strstr(str,"Rak");
    printf("\n Substring is : %s", sub);
    return 0;
}