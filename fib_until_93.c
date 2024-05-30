#include <stdio.h>
#include <stdlib.h>

unsigned long long *mul(unsigned long long *matrix)
{
    unsigned long long *ans = calloc(4, sizeof(unsigned long long));
    ans[0] = (1 * matrix[0] + 1 * matrix[2]);
    ans[1] = (1 * matrix[1] + 1 * matrix[3]);
    ans[2] = (1 * matrix[0] + 0 * matrix[2]);
    ans[3] = (1 * matrix[1] + 0 * matrix[3]);
    free(matrix);
    return ans;
}

unsigned long long fib(unsigned long long x)
{
    if (x == 0)
    {
        return 0;
    }
    else if (x == 1 || x == 2)
    {
        return 1;
    }
    else
    {
        unsigned long long *res = calloc(4, sizeof(unsigned long long));
        res[0] = 1;
        res[1] = 1;
        res[2] = 1;
        res[3] = 0;
        x--;

        while (x--)
        {
            res = mul(res);
        }
        unsigned long long result = res[1];
        free(res);
        return result;
    }
}

int main()
{
    unsigned long long x = 0;
    int num = scanf("%llu", &x);
    if (num == 1)
    {
        unsigned long long res = fib(x);
        printf("%llu\n", res);
    }
    else
    {
        printf("Enter one number.");
    }
}
