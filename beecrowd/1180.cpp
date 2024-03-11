#include <iostream>

using namespace std;

int main() {

    float l, n, acu = 0;
    char t;

    cin >> l;
    cin >> t;

    for(int i = 0; i < 12; i++)
        for(int i = 0; i < 12; i++){
            cin >> n;
            if(i == l) acu += n;
        }

    if(t=='M') acu /= 12;

    cout << acu << endl;

    return 0;
}
