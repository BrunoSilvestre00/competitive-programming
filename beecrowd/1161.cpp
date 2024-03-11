#include <iostream>

using namespace std;

int main()
{
    int M, N;
    long int fatM, fatN, soma;

    while (cin >> M >> N)
    {
        fatM = 1; fatN = 1;

        for (int i = 1; i <= M; i++)
        {
            fatM *= i;
        }

        for (int i = 1; i <= N; i++)
        {
            fatN *= i;
        }

        soma = fatM + fatN;

        cout << soma << endl;
    }

    return 0;
}
