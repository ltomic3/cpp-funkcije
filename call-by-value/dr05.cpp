#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int unos(char c)
{
    int br;
    cin >> br;
    return br;
}

int najveci(int a, int b, int c)
{
    return max(a, max(b, c));
}

int najmanji(int a, int b, int c)
{
    return min(a, min(b, c));
}

int srednji(int a, int b, int c)
{
    int veci = najveci(a, b, c);
    int manji = najmanji(a, b, c);

    if (a != veci and a != manji)
        return a;

    if (b != veci and b != manji)
        return b;

    return c;
}

int main()
{
    int a = unos('a');
    int b = unos('b');
    int c = unos('c');

    cout << "Srednji : " << srednji(a, b, c);

    return 0;
}
