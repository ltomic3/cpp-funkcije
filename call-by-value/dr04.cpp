#include <iostream>
#include <algorithm>
#include <string>
#include <vector>
using namespace std;

int predznak(double broj)
{
    if (broj > 0)
        return 1;
    if (broj < 0)
        return -1;
    return 0;
}

int main()
{
    int n;
    double broj;
    cin >> n;

    vector<double> brojevi;
    for (int i = 0; i < n; i++)
    {
        cin >> broj;
        brojevi.push_back(broj);
    }

    for (int i = 0; i < brojevi.size(); i++)
        if (predznak(brojevi.at(i)) == -1)
            cout << brojevi.at(i) << endl;

    for (int i = 0; i < brojevi.size(); i++)
        if (predznak(brojevi.at(i)) == 0)
            cout << brojevi.at(i) << endl;

    for (int i = 0; i < brojevi.size(); i++)
        if (predznak(brojevi.at(i)) == 1)
            cout << brojevi.at(i) << endl;

    return 0;
}
