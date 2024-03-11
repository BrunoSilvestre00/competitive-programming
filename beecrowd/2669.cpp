#include <bits/stdc++.h>

using namespace std;

int calc_peso(string sub_str){
    int peso = 0;
    for (int i = 0; i < sub_str.size(); i++){
        peso += int(sub_str[i])-96;
    }
    return peso;
}

int main(){

    string s, sub;
    cin >> s;
    vector<int> pesos;
    int i, j, peso, tam = s.size();

    for (i = 1; i <= tam; i++){
        for (j = 0; j < tam; j++){
            if ((j+i) <= tam){
                sub = s.substr(j,i);
                peso = calc_peso(sub);
                if ( std::find(pesos.begin(), pesos.end(), peso) == pesos.end() )
                    pesos.push_back(peso);
            }
        }
    }

    cout << pesos.size() << endl;

    return 0;
}
