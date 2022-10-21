#include<stdio.h>
#include<stdlib.h>

void* roll_dice()
{
    int value = (rand()%6)+1;
    //printf("%d\n",value);
    int* result = malloc(sizeof(int));
    *result=value;
    return (void*) result;
}

int main()
{
    printf("%d\n",*(int*)roll_dice());
}