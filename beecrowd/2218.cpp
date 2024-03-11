#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int T, R, N, P;

    cin >> T;

    for (int i = 0; i < T; i++)
    {
        cin >> N;

        P = 2;

        for (int j = 2; j <= N; j++)
            P += j;

        cout << P << endl;
    }

    return 0;
}
