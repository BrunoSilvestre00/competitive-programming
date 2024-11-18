#include <stdio.h>

int main() {

    int t, n, i, j, k, a[10];
    scanf("%d", &t);
    for(i = 0; i < t; i++) {
        scanf("%d", &n);
        for(j = 0; j < n; j++) {
            scanf("%d", &a[j]);
        }
        for(j = 0; j < n; j++) {
            for(k = j+1; k < n; k++) {
                if(a[j] < a[k]) {
                    int temp = a[j];
                    a[j] = a[k];
                    a[k] = temp;
                }
            }
        }
        printf("Case %d: %d\n", i+1, a[n/2]);
    }

    return 0;
}
