#include <iostream>

using namespace std;

int main(){


    char L = 'A' + 1;
    cout << L << endl;

    return 0;
}

int main2() {
    int a, b, c;
    while(cin >> a >> b >> c){
        char r = (a+b+c)%3 == 0 ? '*' : 'A' + (a==c) + 2*(a==b);
        cout << r << endl;
    }
    return 0;
}
