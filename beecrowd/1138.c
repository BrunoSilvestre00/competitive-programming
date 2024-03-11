#include <stdio.h>

int qtd[10];

void zera(){
    int i;
    for(i = 0; i < 10; i++)
        qtd[i] = 0;
}

int pow(int base, int exp){

    if (exp == 0)
        return 1;

    if (exp == 1)
        return base;

    int i, r = base;
    for(i = 1; i < exp; i++)
        r *= base;

    return r;
}

int contaDigito(int n){
    int d = 0;
    while(n/pow(10, d) != 0){
        d++;
    }
    return d;
}

void separaDigitos(int n){

    int i, fnum, tam = contaDigito(n)-1;

    for(i = tam; i >= 0; i--){
        fnum = n/pow(10,i);
        qtd[fnum]++;
        n -= fnum*pow(10,i);
    }
}

int main(){

    int n1, n2, i, j;
    scanf("%d %d", &n1, &n2);
    while(n1 != 0 && n2 != 0){
        zera();
        for(i = n1; i <= n2; i++){
            separaDigitos(i);
        }

        for(j = 0; j < 10; j++){
            printf("%d ", qtd[j]);
        }
        printf("\n");
        scanf("%d %d", &n1, &n2);
    }

    return 0;
}
