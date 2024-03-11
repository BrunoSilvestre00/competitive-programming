#include <stdio.h>

typedef struct Ponto{
    int x;
    int y;
}ponto;

float abs(float n){
    if(n >=  0) return  n;
    else return -n;
}

float areaQuadrilatero(ponto X, ponto Y, ponto Z, ponto W){

    int M[5][2];

    M[0][0] = X.x;
    M[0][1] = X.y;
    M[1][0] = Y.x;
    M[1][1] = Y.y;
    M[2][0] = Z.x;
    M[2][1] = Z.y;
    M[3][0] = W.x;
    M[3][1] = W.y;
    M[4][0] = X.x;
    M[4][1] = X.y;

    int detM, dir, esq;

    dir = M[0][0]*M[1][1] + M[1][0]*M[2][1] + M[2][0]*M[3][1] + M[3][0]*M[4][1];
    esq = M[0][1]*M[1][0] + M[1][1]*M[2][0] + M[2][1]*M[3][0] + M[3][1]*M[4][0];

    detM = dir - esq;

    return detM/2;
}

int main(){

    ponto A, B, C, D;
    float terrenoA, terrenoB;

    scanf("%d %d", &A.x, &A.y);
    scanf("%d %d", &B.x, &B.y);
    scanf("%d %d", &C.x, &C.y);
    scanf("%d %d", &D.x, &D.y);

    terrenoA = areaQuadrilatero(A, B, C, D);
    terrenoA = abs(terrenoA);

    scanf("%d %d", &A.x, &A.y);
    scanf("%d %d", &B.x, &B.y);
    scanf("%d %d", &C.x, &C.y);
    scanf("%d %d", &D.x, &D.y);

    terrenoB = areaQuadrilatero(A, B, C, D);
    terrenoB = abs(terrenoB);

    if (terrenoB >= terrenoA){
        printf("terreno B\n");
    }else{
        printf("terreno A\n");
    }

    return 0;
}
