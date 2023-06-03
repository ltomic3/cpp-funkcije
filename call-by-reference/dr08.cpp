#include <iostream>
#include <cmath>
using namespace std;

void swap(int &, int &);

void swap(int &x, int &y)
{
    x ^= y;
    y ^= x;
    x ^= y;
}

int main()
{
    int a, b;
    cin >> a >> b;

    swap(a, b);

    cout << a << " " << b;

    return 0;
}
