#include <stdio.h>

int main()
{
    unsigned int n, p, q;
    char op;
    scanf("%u %u %c %u", &n, &p, &op, &q);

    unsigned int result;
    if (op == '+')
    {
        result = p + q;
    }
    else
    {
        result = p * q;
    }

    if (result > n)
    {
        printf("OVERFLOW\n");
    }
    else
    {
        printf("OK\n");
    }

    return 0;
}
