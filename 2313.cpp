#include <stdio.h>

int main()
{
    int a, b, c, aux;
    scanf("%d %d %d", &a, &b, &c);

    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }
    if (b > c)
    {
        aux = b;
        b = c;
        c = aux;
    }
    if (a > b)
    {
        aux = a;
        a = b;
        b = aux;
    }

    if (a + b <= c)
    {
        printf("Invalido\n");
        return 0;
    }

    if (a == b && b == c)
    {
        printf("Valido-Equilatero\n");
    }
    else if (a != b && b != c && a != c)
    {
        printf("Valido-Escaleno\n");
    }
    else
    {
        printf("Valido-Isoceles\n");
    }

    if (c * c == a * a + b * b)
    {
        printf("Retangulo: S\n");
    }
    else
    {
        printf("Retangulo: N\n");
    }

    return 0;
}
