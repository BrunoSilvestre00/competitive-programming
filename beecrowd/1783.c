#include <stdio.h>

int main(){

    int t;

    float xeo1, xeo2, yeo1, yeo2;
    float xen1, xen2, yen1, yen2;
    float x0, y0;

    float A, B, C, D, W, Z;

    scanf("%d", &t);

    for (int i = 1; i <= t; i++){

        scanf("%f %f", &xeo1, &yeo2);
        scanf("%f %f", &xeo2, &yeo2);
        scanf("%f %f", &xen1, &yen2);
        scanf("%f %f", &xen2, &yen2);

        Z = xeo1*xeo1 + yeo1*yeo1 - xen1*xen1 - yen1*yen1;
        W = xeo2*xeo2 + yeo2*yeo2 - xen2*xen2 - yen2*yen2;

        A = xeo1 - xen1;
        B = yeo1 - yen1;

        C = xeo2 - xen2;
        D = yeo2 - yen2;

        x0 = (B*W - D*Z)/(2*B*C - 2*A*D);
        y0 = (Z - x0*2*A)/(2*B);

        printf("Caso #%d: %.2f %.2f\n", i, x0, y0);
    }


    return 0;
}
