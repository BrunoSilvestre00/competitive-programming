#include <iostream>

using namespace std;

int main()
{
    int A, B, N;
    int tamanhoB, aux, aux2;

    cin >> N;

    for (int i = 0;  i < N; i++)
    {
        cin >> A >> B;

        aux2 = 1;

        if (B <= A)
        {
            tamanhoB = 1;
            aux = 10;

            while(B/aux >= 1)
            {
                tamanhoB++;
                aux *= 10;
            }

            aux = 10;
            for (int j = 0; j < tamanhoB; j++)
            {
                if (A%aux != B%aux)
                {
                    cout << "nao encaixa\n";
                    aux2 = 0;
                    break;
                }
                aux *= 10;
            }

            if (aux2 != 0)
                cout << "encaixa\n";
        }
        else
            cout << "nao encaixa\n";
    }

    return 0;
}
