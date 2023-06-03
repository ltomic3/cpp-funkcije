#include <iostream>
#include <vector>
using namespace std;

long long faktorijel(int broj)
{
    long long int f = 1;
    for (int i = 1; i <= broj; i++)
        f *= i;
    return f;
}

void izracunajFaktorijele(int n)
{
    vector<long long> faktorijeli;
    for (int i = 0; i < n; i++)
    {
        int broj;
        cin >> broj;
        faktorijeli.push_back(faktorijel(broj));
    }

    for (auto &broj : faktorijeli)
        cout << broj << endl;
}

int main()
{
    int n;
    cin >> n;

    izracunajFaktorijele(n);

    return 0;
}
