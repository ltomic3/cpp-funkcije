#include <iostream>
#include <cmath>
using namespace std;

void prebroji(int vozila, int guma, int &automobila, int &motora)
{
    if ((guma & 1) != 0)
    {
        automobila = -1;
        motora = -1;
        return;
    }

    automobila = 0;
    motora = 0;

    while (vozila > 0)
    {
        if (automobila * 4 + (vozila - automobila) * 2 == guma)
        {
            motora = vozila - automobila;
            return;
        }
        else
        {
            automobila++;
        }
    }
}

int main()
{
    int vozila, guma;
    cin >> vozila >> guma;

    int automobila, motora;
    prebroji(vozila, guma, automobila, motora);

    if (automobila == -1)
    {
        cout << "nema rjesenja";
        return 0;
    }

    cout << "automobila = " << automobila << endl;
    cout << "motora = " << motora;
    return 0;
}
