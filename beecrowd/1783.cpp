#include <bits/stdc++.h>

using namespace std;

typedef struct{
    float x;
    float y;
} Ponto;

float return_J(Ponto a, Ponto n){
    float J;
    J = (n.x*n.x - n.y*n.y)/2 - (a.x*a.x - a.y*a.y)/2;
    return J;
}

int main(){

    int T;
    scanf("%d", &T);

    Ponto ea1, en1, ea2, en2;

    for(int i = 1; i <= T; i++){

        scanf("%f %f", &ea1.x, &ea1.y);
        scanf("%f %f", &ea2.x, &ea2.y);

        scanf("%f %f", &en1.x, &en1.y);
        scanf("%f %f", &en2.x, &en2.y);

        float J1 = return_J(ea1, en1);
        float J2 = return_J(ea2, en2);

        float K1 = en1.x - ea1.x;
        float K2 = en2.x - ea2.x;

        float L1 = en1.y - ea1.y;
        float L2 = en2.y - ea2.y;

        float y0 = (J2*K1 - J1*K2)/(K2*L1 - K1*L2);

        float x0 = (J1 + (y0*L1))/K1;

        printf("Caso #%d: %.2f %.2f\n", i, x0, y0);
    }

    return 0;
}



