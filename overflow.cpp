#include <stdio.h>

int main()
{
    long long n, p, q, result;
    char op;

    scanf("%lld %lld %c %lld", &n, &p, &op, &q);

    if (op == '+')
    {
        result = p + q;
        if (result > n)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }
    else if (op == '*')
    {
        result = p * q;
        if (result > n)
        {
            printf("OVERFLOW\n");
        }
        else
        {
            printf("OK\n");
        }
    }

    return 0;
}
