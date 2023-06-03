#include <iostream>
#include <cmath>
using namespace std;

void prebroji(int broj, int &sumaParnih, int &sumaNeparnih)
{
    sumaParnih = 0;
    sumaNeparnih = 0;

    while (broj > 0)
    {
        int znamenka = broj % 10;
        if ((znamenka & 1) == 0)
        {
            sumaParnih += znamenka;
        }
        else
        {
            sumaNeparnih += znamenka;
        }

        broj /= 10;
    }
}

int main()
{
    int broj, sumaParnih, sumaNeparnih;
    cin >> broj;

    prebroji(broj, sumaParnih, sumaNeparnih);
    cout << "suma parnih = " << sumaParnih << endl;
    cout << "suma neparnih = " << sumaNeparnih;

    return 0;
}
