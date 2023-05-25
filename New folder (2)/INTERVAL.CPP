#include <stdio.h>
int main()
{
    float x;
    scanf("%f", &x);
    if (x < 0 || x > 100)
    {
        printf(" FORA\n");
    }
    else if (x <= 0 || x <= 25)
    {
        printf("inverto 0-25\n"); /* code */
    }
    else if (x < 25 || x <= 50)
    {
        printf("inverto 25-50\n"); /* code */
    }
    else if (x < 50 || x <= 75)
    {
        printf("inverto 50-75\n"); /* code */
    }
    else if (x < 75 || x <= 100)
    {
        printf("inverto 75-100\n"); /* code */
    }

    return 0;
}