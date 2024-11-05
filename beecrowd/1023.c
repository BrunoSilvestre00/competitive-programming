#include <stdio.h>
#define LL long long int

int solve(LL n, LL city) {
    LL consumos[201] = {0};
    LL i, a, b, p, pt = 0;
    int cm;
    float c, ctm, ct = 0;

    for(i = 0; i < n; i++) {
        scanf("%lld %f", &p, &c);
        pt += p;
        ct += c;
        cm = (int) c / p;
        consumos[cm] += p;
    }

    ctm = ct / pt;
    ctm = (float) ((int) (ctm * 1000)) / 1000;

    if (city != 1){
        printf("\n");
    }
    printf("Cidade# %lld:\n", city);
    
    b = 0;
    for(i = 0; i <= 200; i++) {
        a = consumos[i];
        if(a != 0) {
            if(b != 0){
                printf(" ");
            }
            printf("%lld-%lld", a, i);
            b = 1;
        }
    }

    printf("\nConsumo medio: %.2f m3.\n", ctm);

    return 0;
}

int main() {
    LL n, city = 1;

    while(1) {
        scanf("%lld", &n);
        if(!n) break;
        solve(n, city);
        city++;
    }

    return 0;
}
