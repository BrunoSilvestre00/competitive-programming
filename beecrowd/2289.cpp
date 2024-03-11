#include <iostream>

using namespace std;

int* to_binary(unsigned long long int n){
    int i = 0;
    int rest[64] = {0};
    for(int i = 0; n!=0; i++){
        rest[i] = n%2;
        n /= 2;
    }
    return rest;
}

int main(){

    unsigned long long int x, y;
    while(true){
        cin >> x >> y;
        if(!(x||y)) break;

        int bin_x[64] = {0};
        int bin_y[64] = {0};

        int i, dist = 0;
        // Transforma o primeiro em binário
        for(i = 0; x!=0; i++){
            bin_x[i] = x%2;
            x /= 2;
        }

        // Tranforma o segundo em binário
        for(i = 0; y!=0; i++){
            bin_y[i] = y%2;
            y /= 2;
        }

        // Hamming
        for(i = 0; i < 64; i++){
            dist += bin_x[i] != bin_y[i] ? 1 : 0;
        }

        cout << dist << endl;
    }

    return 0;
}
