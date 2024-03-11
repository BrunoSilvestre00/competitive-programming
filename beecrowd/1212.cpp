#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n1, n2, carry, aux;

    while(true)
    {
        cin >> n1 >> n2;

        if (n1 == 0 && n2 == 0)
            break;

            carry = 0;

            aux = 0;

            while (true)
            {

                if (n1%10 + n2%10 + aux >= 10)
                {
                    carry++;
                    aux = 1;
                }
                else
                    aux = 0;

                n1 /= 10;
                n2 /= 10;

                if (n1 == 0 && n2 == 0)
                    break;

            }

            if (carry == 0)
                cout << "No carry operation.\n";
            else if (carry == 1)
                cout << "1 carry operation.\n";
            else
                cout << carry << " carry operations.\n";


    }

    return 0;
}
