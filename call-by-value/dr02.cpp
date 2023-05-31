#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

bool potencija(int broj)
{
    while (broj != 1)
    {
        if (broj % 2 != 0)
            return false;
        broj /= 2;
    }
    return true;
}

int main()
{
    int broj;
    cin >> broj;

    cout << (potencija(broj) ? "DA" : "NE");

    return 0;
}
