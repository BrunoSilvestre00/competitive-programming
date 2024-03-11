#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    float hi, mi, hf, mf;
    float ti, tf, tt;
    float th, tm;

    cin >> hi >> mi >> hf >> mf;

    ti = hi + mi/60;
    tf = hf + mf/60;

    if (tf > ti) tt = tf - ti;
    else tt = (24 - ti) + tf;

    th = int(tt);
    tm = (tt-th)*60;

    if (th == 0 && tm == 0) th = 24;

    cout << "O JOGO DUROU " << th << " HORA(S) E " << tm << " MINUTO(S)" << endl;

    return 0;
}
