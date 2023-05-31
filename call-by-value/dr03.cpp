#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

vector<int> ucitajBrojeve(int n)
{
    vector<int> brojevi;
    for (int i = 0; i < n; i++)
    {
        int broj;
        cin >> broj;
        brojevi.push_back(broj);
    }
    return brojevi;
}

long long faktorijel(int broj)
{
    long long int f = 1;
    for (int i = 1; i <= broj; i++)
        f *= i;
    return f;
}

vector<long long> izracunajFaktorijele(vector<int> brojevi)
{
    vector<long long> faktorijeli;

    for (int i = 0; i < brojevi.size(); i++)
        faktorijeli.push_back(faktorijel(brojevi.at(i)));

    return faktorijeli;
}

int main()
{
    int n;
    cin >> n;

    auto brojevi = ucitajBrojeve(n);
    auto faktorijeli = izracunajFaktorijele(brojevi);

    for (int i = 0; i < faktorijeli.size(); i++)
        cout << faktorijeli.at(i) << endl;

    return 0;
}
