#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, part1;

    printf("\nEnter the value of a, b & c = ");
    scanf("%lf%lf%lf", &a, &b, &c);

    part1 = (b * b) - (4 * a * c);

    if (part1 >= 0 && a != 0)
    {
        x1 = (-b + sqrt(part1)) / (2 * a);
        x2 = (-b - sqrt(part1)) / (2 * a);

        printf("\nValue = %lf, %lf\n", x1, x2);
    }
    else
    {
        printf("\nMath ERROR\n");
    }

    printf("\n");

    return 0;
}