#include <stdio.h>
int fibonacci(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        return n * fibonacci(n - 1);
    }
}
int main()
{
    int num = 5;
    int res = fibonacci(num);
    printf("%d", res);
    return 0;
}
