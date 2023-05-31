#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int znamenke(int broj)
{
    int provjera = broj;
    bool imaParnu = false;
    while (provjera != 0)
    {
        int z = provjera % 10;
        if (z % 2 == 0)
        {
            imaParnu = true;
            break;
        }
        provjera /= 10;
    }

    if (!imaParnu)
        return 0;

    return broj;
}

int main()
{
    int n, broj;
    cin >> n;

    int suma = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> broj;
        suma += znamenke(broj);
    }

    if (suma == 0)
    {
        cout << "-";
        return 0;
    }

    cout << suma;

    return 0;
}
