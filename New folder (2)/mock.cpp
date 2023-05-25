#include <stdio.h>

int main()
{
    int N, i, a, b = 0;
    int c = 0, d = 0, e = 0;
    char type;

    scanf("%d", &N);

    for (i = 0; i < N; i++)
    {
        scanf("%d %c", &a, &type);

        b += a;

        switch (type)
        {
        case 'C':
            c += a;
            break;
        case 'R':
            d += a;
            break;
        case 'S':
            e += a;
            break;
        }
    }

    printf("Total: %d cobaias\n", b);
    printf("Total de coelhos: %d\n", c);
    printf("Total de ratos: %d\n", d);
    printf("Total de sapos: %d\n", e);
    printf("Percentual de coelhos: %.2lf %%\n", (c * 100.0) / b);
    printf("Percentual de ratos: %.2lf %%\n", (d * 100.0) / b);
    printf("Percentual de sapos: %.2lf %%\n", (e * 100.0) / b);

    return 0;
}
