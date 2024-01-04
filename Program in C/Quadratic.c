#include <math.h>
#include <stdio.h>
int main() {
    float a, b, c, d, r1, r2, realPart, imagPart;
    printf("Enter the value of a, b and c: ");
    scanf("%f %f %f", &a, &b, &c);

    d = b * b - 4 * a * c;

    if (d > 0) {
        r1 = (-b + sqrt(d)) / (2 * a);
        r2 = (-b - sqrt(d)) / (2 * a);
        printf("r1 = %f and r2 = %f", r1, r2);
    }

    else if (d == 0) {
        r1 = r2 = -b / (2 * a);
        printf("r1 = r2 = %f;", r1);
    }

    else {
        realPart = -b / (2 * a);
        imagPart = sqrt(-d) / (2 * a);
        printf("r1 = %f+%f and r2 = %f-%f", realPart, imagPart, realPart, imagPart);
    }

    return 0;
} 
