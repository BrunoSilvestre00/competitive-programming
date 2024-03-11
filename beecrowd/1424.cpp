#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, m, k, v, i, j;
    vector <int> vetor;
    vector <int> posicoes;

    while(cin >> n >> m)
    {
        vetor.resize(n+1);

        for(i = 1; i <= n; i++)
        {
            cin >> vetor[i];
        }

        for(i = 0; i < m; i++)
        {
            posicoes.resize(m, 0);
            cin >> k >> v;

            for(j = 1; j <= vetor.size(); j++)
            {
                if(vetor[j] == v) k--;

                if(k == 0)
                {
                    posicoes[i] = j;
                    break;
                }
            }
        }

        for(i = 0; i < m; i++)
        {
            cout << posicoes[i] << endl;
        }
    }

    return 0;
}
