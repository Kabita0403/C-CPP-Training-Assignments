#include<stdio.h>

struct Point
{
    int x,y;
};



int main()
{
    //array of structures
    struct Point arr[10];
    struct Point aa;

    //access array members
    arr[0].x = 10;
    arr[0].y = 20;
    aa.x=20;
    aa.y=39;

    printf("%d %d %d %d", arr[0].x, arr[0].y, aa.x, aa.y);
    return 0;

}