#include <stdio.h>

int main(){

    int n, valores[7][2] = {{100,0}, {50,0}, {20,0}, {10,0}, {5,0}, {2,0}, {1,0}};

    scanf("%d", &n);
    printf("%d\n", n);
    for(int i = 0; i < 7; i++){
        valores[i][1] = n/valores[i][0];
        n -= valores[i][0]*valores[i][1];
        printf("%d nota")
    }

    return 0;
}
