#include <iostream>
#include <cmath>
using namespace std;

void kutRadUStupMinSek(double rad, int &stup, int &min, int &sek)
{
    double kut = rad * 180 / M_PI;

    stup = (int)kut;
    kut = kut - (int)kut;
    kut *= 60;

    min = (int)kut;
    kut = kut - (int)kut;
    kut *= 60;

    sek = (int)kut;
}

int main()
{
    double rad;
    cin >> rad;

    int stup, min, sek;
    kutRadUStupMinSek(rad, stup, min, sek);
    cout << stup << "\370 " << min << "' " << sek << "\"";
    // \370 == '°'

    return 0;
}
