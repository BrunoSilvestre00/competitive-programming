#include <iostream>
#include <string.h>

using namespace std;

int main() {

    int c, i;
    char ataque[200];
    int a1, a2;
    int pos;

    cin >> c;

    for (int k = 0; k < c; k++)
    {
        a1 = 0;
        a2 = 0;

        cin >> ataque;

        for (i = 0; i < strlen(ataque); i++)
        {
            if (ataque[i] == 'h') pos = 1;
            if (ataque[i] == 'k') pos = 2;
            if (ataque[i] == 'a' && pos == 1) a1++;
            if (ataque[i] == 'a' && pos == 2) a2++;
        }

        cout << "k";

        for (i = 0; i < a1*a2; i++)
            cout << "a";

        cout << endl;

    }

    return 0;
}
