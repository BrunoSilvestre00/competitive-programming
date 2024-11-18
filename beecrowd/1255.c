// C é um lixoo pra mexer com String :(
#include <stdio.h>

int getLetterIndex(int letter) {
    if(97 <= letter && letter <= 122) {
        return letter - 96;
    }
    if(65 <= letter && letter <= 90) {
        return letter - 64;
    }
    return 0;
}

int main() {
    int a, k;

    scanf("%d", &a);
    for (k = 0; k < a; k++) {
        char input[200] = {0};
        int count[26] = {0};
        int i, j, m = 0;

        while(fgets(input, 200, stdin) != NULL){
        
            printf("-- %s\n", input);
            for(j = 0; j < 200; j++) {
                if(i = getLetterIndex(input[j])) {
                    count[i-1]++;
                }
            }

            for(i = 0; i < 26; i++){
                if(count[i] > m) {
                    m = count[i];
                }
            }

            for(i = 0; i < 26; i++){
                if(count[i] == m) {
                    printf("%c %d | ", i+97, count[i]);
                }
            }

            printf("\n");
        }
    }

    return 0;
}
    
