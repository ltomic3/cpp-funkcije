#include <iostream>
#include <cmath>
using namespace std;

void ucitajTocku(int &x, int &y)
{
    cin >> x >> y;
}

void jednazdbaPravca(int x1, int y1, int x2, int y2)
{
    if (x1 == x2 and y1 == y2)
    {
        cout << "Tocke su iste" << endl;
        return;
    }

    if (x1 == x2)
    {
        cout << "x = " << x1 << endl;
        return;
    }

    if (y1 == y2)
    {
        cout << "y = " << y1 << endl;
        return;
    }

    double k = (double)(y2 - y1) / (x2 - x1);
    double l = y1 - k * x1;
    l = round(l * 100) / 100;

    char predznak = l < 0 ? '-' : '+';
    l = abs(l);

    cout << "y = " << k << "x" << predznak;
    printf("%.2f", l);
}

int main()
{
    int x1, y1;
    int x2, y2;

    ucitajTocku(x1, y1);
    ucitajTocku(x2, y2);

    jednazdbaPravca(x1, y1, x2, y2);
    return 0;
}
