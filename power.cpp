#include <stdio.h>
#include <math.h>

int main()
{
    double b, p, result;

    printf("Enter the base number: ");
    scanf("%lf", &b);

    printf("Enter the power raised: ");
    scanf("%lf",&p);

    result = pow(b,p);

    printf("%.1lf^%.1lf = %.2lf", b,p, result);

    return 0;
}

