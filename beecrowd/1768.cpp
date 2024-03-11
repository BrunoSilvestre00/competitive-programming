#include <iostream>

using namespace std;

int main(){

    int N = 3;
    while(N != 99){
        for (int i = 1; i <= N; i+=2){
            int spc = (N-i)/2;
            for(int j = 0; j < spc; j++){
                cout << ' ';
            }
            for(int j = 0; j < i; j++){
                cout << '*';
            }
            cout << endl;
        }

        for(int i = 1; i <= 3; i+=2){
            int spc = (N-i)/2;
            for(int j = 0; j < spc; j++){
                cout << ' ';
            }
            for(int j = 0; j < i; j++){
                cout << '*';
            }
            cout << endl;
        }
        cout << endl;
        N += 8;
    }
    return 0;
}
