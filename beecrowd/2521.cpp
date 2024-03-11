#include <iostream>
#include <stdio.h>
#include <math.h>
#define PI 3.141592

using namespace std;

int main()
{
    float x, y, z;
    float r, lo, la;

    while(cin >> r >> la >> lo)
    {
        la = (la*PI)/180;
        lo = (lo*PI)/180;

        y = sin(la)*r;
        x = sin(lo)*cos(la)*r;
        z = (cos(lo)*cos(la)*r);

        if (int (z * 10) != 0) z = -z;

        printf ("%.2f %.2f %.2f\n", x, y, z);
    }

    return 0;
}
