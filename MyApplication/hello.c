#include <stdio.h>
int add(int a, int b);

int main()
{
    printf("Hello, world!\n");
}

void func()
{
    if (add(100, 100) > 0)
    {
        printf("More than 0 \n");
    }
    else
    {
        printf("Less than equal to 0 \n");
    }
}

int add(int a, int b)
{
    return a + b;
}
