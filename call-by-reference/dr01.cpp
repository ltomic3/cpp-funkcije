#include <iostream>
using namespace std;

void ucitajBroj(int &);
int suma1(int &);
int suma2(int &);

void ucitajBroj(int &broj)
{
    cin >> broj;
}

int suma1(int &broj)
{
    int prvaZnamenka = broj % 10;
    int drugaZnamenka = broj % 100 / 10;
    return prvaZnamenka + drugaZnamenka;
}

int suma2(int &broj)
{
    int trecaZnamenka = broj % 1000 / 100;
    int cetvrtaZnamenka = broj % 10000 / 1000;
    return trecaZnamenka + cetvrtaZnamenka;
}

int main()
{
    int broj;
    ucitajBroj(broj);
    cout << "T + S = " << suma2(broj) << endl;
    cout << "D + J = " << suma1(broj) << endl;
    return 0;
}