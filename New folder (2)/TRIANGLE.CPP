#include <stdio.h>
int main()
{
    float a, b, c, x, y;
    scanf("%f%f%f", &a, &b, &c);
    if ((a + b) > c && (b + c) > a && (c + a) > b)
    {
        x = a + b + c;
        printf("Permetro %.1f", x);
    }
    else
    {
        y = .5 * (a + b) * c;
        printf("Area %.1f", y);
    }
    return 0;
}