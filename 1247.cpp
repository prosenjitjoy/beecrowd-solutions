#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d, vf, vg, x, y, z;
    while (cin >> d >> vf >> vg)
    {
        x=12/vf;
        y=sqrt(pow(12,2)+pow(d,2));
        z=y/vg;
        if (z<=x)
            cout << "S" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
