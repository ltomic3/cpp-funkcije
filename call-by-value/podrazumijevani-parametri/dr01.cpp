#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

double aritmeticka(int a = 0, int b = 0, int c = 0)
{
    double broj = 0.0;
    if (a != 0)
        broj += 1;
    if (b != 0)
        broj += 1;
    if (c != 0)
        broj += 1;

    return (a + b + c) / broj;
}

double geometrijska(int a = 0, int b = 0, int c = 0)
{
    double broj = 1.0;
    int brojac = 0;
    if (a != 0)
    {
        broj *= a;
        brojac++;
    }
    if (b != 0)
    {
        broj *= b;
        brojac++;
    }
    if (c != 0)
    {
        broj *= c;
        brojac++;
    }

    if (brojac == 0)
        return 0 / 0.0; // nan

    return pow(broj, 1.0 / brojac);
}

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    cout << aritmeticka(a, b, c) << endl;
    cout << geometrijska(a, b, c) << endl;

    return 0;
}
