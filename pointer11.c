//FunctionPointer

#include<stdio.h>

int addition()
{
    int a,b;
    printf("Enter two numbers?\n");
    scanf("%d %d", &a,&b);
    return a+b;
}

int subtraction()
{
    int a,b;
    printf("Enter two numbers?\n");
    scanf("%d %d", &a,&b);
    return a-b;
}
int main()
{
    int result;
    int (*ptr)();
    ptr = &addition;
    result = (*ptr)();
    printf("The sum is %d\n",result);
    ptr = &subtraction;
    result = (*ptr)();
    printf("The difference is %d\n",result);

}
