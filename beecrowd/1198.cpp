#include <iostream>

using namespace std;

int main()
{
    unsigned long long int sH, sI, d;

    while (cin >> sH >> sI)
    {
        sH < sI ? cout << (sI - sH) << endl : cout << (sH - sI) << endl;
    }

    return 0;
}
