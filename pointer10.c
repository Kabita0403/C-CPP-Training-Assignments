#include<stdio.h>
#include<stdlib.h>

void main(){

    int i =100;
    int *p = &i;
    int *temp;
    temp = p;
    p = p+3;
    printf(" Pointer Subtraction: %d -%d", p,temp);



}