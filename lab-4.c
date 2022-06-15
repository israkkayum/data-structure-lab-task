#include <stdio.h>
#include <math.h>

int main()
{
    double a, b, c, x1, x2, part1;

    printf("Enter the value of a, b & c = ");
    scanf("%lf%lf%lf", &a, &b, &c);

    part1 = (b * b) - (4 * a * c);

    if (part1 >= 0 && a != 0)
    {
        x1 = (-b + sqrt(part1)) / (2 * a);
        x2 = (-b - sqrt(part1)) / (2 * a);

        printf("Value = %lf, %lf\n", x1, x2);
    }
    else
    {
        printf("Math ERROR\n");
    }

    return 0;
}