#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float D, VF, VG, S;

    while (cin >> D >> VF >> VG)
    {
        if (VG > VF)
        {
            S = sqrt(D*D + 144);

            float tempoG = S/VG;
            float tempoF = 12/VF;

            tempoG <= tempoF ? printf ("S\n") : printf ("N\n");
        }
        else
            cout << "N\n";
    }

    return 0;
}
