#include <iostream>
#include <cmath>
#include <bitset>
using namespace std;

void razdvoji(int, int &, int &);
int pot(int);
int odgovor(int);

void razdvoji(int broj, int &prvi, int &drugi)
{
    prvi = broj % 10;
    broj /= 10;
    drugi = broj;
}

int pot(int n)
{
    bitset<9> binarni(1 << n);
    return (int)(binarni.to_ulong());
}

int odgovor(int n)
{
    int unos;
    int rezultat = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> unos;
        int prvi, drugi;
        razdvoji(unos, prvi, drugi);
        rezultat += drugi * pot(prvi);
    }
    return rezultat;
}

int main()
{
    int n;
    cin >> n;

    cout << odgovor(n);
}
