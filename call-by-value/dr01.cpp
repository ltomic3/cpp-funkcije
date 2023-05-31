#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int unesiBroj();
int zbrojZnamenki(int);

int unesiBroj()
{
    int broj;
    cin >> broj;
    return broj;
}

int zbrojZnamenki(int broj)
{
    int kopija = broj;
    bool sveZnamenkeIste = true;
    while (true)
    {
        int z = kopija % 10;
        kopija /= 10;

        if (kopija == 0)
            break;

        if (z != kopija % 10)
            sveZnamenkeIste = false;
    }

    int zbroj = 0;
    while (broj != 0)
    {
        zbroj += broj % 10;
        broj /= 10;
    }
    return zbroj;
}

int main()
{
    int broj = unesiBroj();

    if (broj < 100 || broj > 999)
    {
        cout << "NE";
        return 0;
    }

    if (broj / zbrojZnamenki(broj) == 37)
        cout << "DA";
    else
        cout << "NE";

    return 0;
}
