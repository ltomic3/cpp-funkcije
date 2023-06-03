#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
#include <cmath>
using namespace std;

long long f(int broj, int pocetak = 1, int korak = 1)
{
    long long f = 1;
    for (int i = pocetak; i <= broj; i += korak)
    {
        // cout << "f[" << i << "]" << endl;
        f *= i;
    }

    return f;
}

int p(int baza, int eksponent)
{
    int broj = 1;
    for (int i = 0; i < eksponent; i++)
        broj *= baza;
    return broj;
}

int main()
{
    int n;
    cin >> n;

    // cout << "->" << p(2, n) * f(2) << endl;
    cout << f(p(2, n) * f(2), 2, 2);

    return 0;
}
