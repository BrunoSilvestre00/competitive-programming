#include <bits/stdc++.h>

using namespace std;

string pass1(string str){
    int i, c;
    for(i = 0; i < str.length(); i++){
        c = (int)str[i];
        if((65 <= c && c <= 90)||(97 <= c && c <= 122))
            str[i] = char(c+3);
    }
    return str;
}

string pass2(string str){
    string inv = str;
    int i, tam = str.length();
    for(i = 1; i <= tam; i++){
        inv[tam-i] = str[i-1];
    }
    return inv;
}

string pass3(string str){
    int i, c, tam = str.length();
    for(i = tam/2; i <= tam; i++){
        c = (int)str[i];
        str[i] = char(c-1);
    }
    return str;
}

int main(){

    int i, qtd;
    cin >> qtd;
    for(i = 0; i < qtd; i++){
        std::string str;
        std::getline(std::cin, str);
        cout << str;
        cout << pass1(str) << endl;
        cout << pass2(pass1(str)) << endl;
        cout << pass3(pass2(pass1(str))) << endl;
    }

    return 0;
}
