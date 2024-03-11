#include <iostream>

using namespace std;

int main() {

    int X, Y, M, x, y;

    while(cin >> X >> Y >> M)
    {
        for (int i = 0; i < M; i++)
        {
            cin >> x >> y;

            if (x*y <= X*Y) cout << "Sim";
            else cout << "Nao";
        }
    }

    cout << endl;

    return 0;
}
