#include <stdio.h>

int solve(int n, int city) {
    int consumos[201] = {0};
    int i, a, b, p, pt = 0, cm;
    float c, ctm, ct = 0;

    for(i = 0; i < n; i++) {
        scanf("%d %f", &p, &c);
        pt += p;
        ct += c;
        cm = (int) c / p;
        consumos[cm] += p;
    }

    ctm = ct / pt;
    ctm = (float) ((int) (ctm * 100)) / 100;

    if (city != 1){
        printf("\n");
    }
    printf("Cidade# %d\n", city);
    
    b = 0;
    for(i = 0; i <= 200; i++) {
        a = consumos[i];
        if(a) {
            if(b){
                printf(" ");
            }
            printf("%d-%d", a, i);
            b = 1;
        }
    }

    printf("\nConsumo medio: %.2f m3.\n", ctm);

    return 0;
}

int main() {
    int n, city = 1;

    while(1) {
        scanf("%d", &n);
        if(!n) break;
        solve(n, city);
        city++;
    }

    return 0;
}
