#include <stdio.h>

int main()
{
    int height;
    printf("Enter the height in kilometers: ");
    scanf("%d", &height);

    if (height < 0 || height > 1000)
    {
        printf("Height must be between 0 and 1000 kilometers.\n");
        return 1;
    }

    if (height <= 15)
    {
        printf("Troposphere\n");
    }
    else if (height <= 50)
    {
        printf("Stratosphere\n");
    }
    else if (height <= 85)
    {
        printf("Mesosphere\n");
    }
    else if (height <= 500)
    {
        printf("Thermosphere\n");
    }
    else
    {
        printf("Exosphere\n");
    }

    return 0;
}
