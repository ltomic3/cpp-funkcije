#include <iostream>
using namespace std;

void odgovor(double, int &, double &);

void odgovor(double u, int &c, double &d)
{
    c = (int)u;
    d = u - c;
}

int main()
{
    double unos;
    cin >> unos;

    int cijeliDio;
    double decimalniDio;

    odgovor(unos, cijeliDio, decimalniDio);
    cout << cijeliDio << endl
         << decimalniDio;
}
