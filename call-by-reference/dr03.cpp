#include <iostream>
#include <cmath>
using namespace std;

void unos(int &, int &);
double d(int, int, int, int);
double pT(double, double, double);
double poluopseg(double, double, double);

void unos(int &x, int &y)
{
    cin >> x >> y;
}

double d(int x1, int y1, int x2, int y2)
{
    return sqrt(
        pow(x2 - x1, 2) +
        pow(y2 - y1, 2));
}

double pT(double a, double b, double c)
{
    double s = poluopseg(a, b, c);
    return sqrt(s * (s - a) * (s - b) * (s - c));
}

double poluopseg(double a, double b, double c)
{
    return (a + b + c) / 2;
}

int main()
{
    int x1, y1;
    int x2, y2;
    int x3, y3;
    int x4, y4;

    unos(x1, y1);
    unos(x2, y2);
    unos(x3, y3);
    unos(x4, y4);

    double sA = d(x1, y1, x2, y2);
    double sB = d(x2, y2, x3, y3);

    double dijagonala = d(x1, y1, x3, y3);

    double sC = d(x3, y3, x4, y4);
    double sD = d(x4, y4, x1, y1);

    double P = pT(sA, sB, dijagonala) + pT(sC, sD, dijagonala);

    cout << P << endl;
}
