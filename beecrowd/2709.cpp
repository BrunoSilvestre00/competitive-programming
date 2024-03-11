#include <iostream>

using namespace std;

bool testePrimo(int a)
{
    int divisores = 0;

    for (int j = a; j > 0; j--)
    {
        if (a%j == 0) divisores++;
    }

    if (divisores == 2) return true;
    else return false;
}

int main()
{
    int M, N, i;
    int moedas[20];
    int soma;

    while (cin >> M)
    {
        soma = 0;
        for(i = 0; i < M; i++) cin >> moedas[i];

        cin >> N;

        for (i = 0; i < M; i+=N) soma += moedas[i];

        if (testePrimo(soma))
            cout << "You're a coastal aircraft, Robbie, a large silver aircraft." << endl;
        else
            cout << "Bad boy! I'll hit you." << endl;
    }

    return 0;
}
