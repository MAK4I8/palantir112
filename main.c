#include <stdio.h>
#include <math.h>

int main()
{
    double x, y, r1, r2;
    double res;

    printf("Vvedit x, y, r1, r2: ");
    scanf("%lf %lf %lf %lf", &x, &y, &r1, &r2);

    // zavdannya 1
    if (x < 1) {
        printf("Zavdannya 1: pomylka ODZ\n");
    } else {
        res = sin(sqrt(x+1)) - sin(sqrt(x-1));
        printf("Zavdannya 1: %.3f\n", res);
    }

    res = pow(2, -x) - cos(x) + sin(2*x*y);
    printf("Zavdannya 2: %.3f\n", res);

    // perevirka dilennya na 0
    if (r1 == 0 || r2 == 0) {
        printf("Zavdannya 3: dilennya na 0\n");
    } else {
        res = 1/r1 + 1/r2;
        printf("Zavdannya 3: %.3f\n", res);
    }

    if (x == 1) {
        printf("Zavdannya 4: dilennya na 0\n");
    } else {
        res = pow((x+1)/(x-1), x) + 18*x*y*y;
        printf("Zavdannya 4: %.3f\n", res);
    }

    if (x == 0) {
        printf("Zavdannya 5: dilennya na 0\n");
    } else {
        res = pow(1 + 1/(x*x), x) - 12*x*x*y;
        printf("Zavdannya 5: %.3f\n", res);
    }

    return 0;
}
