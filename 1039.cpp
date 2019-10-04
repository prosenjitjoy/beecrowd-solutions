#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double r1, x1, y1, r2, x2, y2;

    while (cin >> r1 >> x1 >> y1 >> r2 >> x2 >> y2)
    {
        double dist=sqrt(pow((x2-x1),2)+pow((y2-y1),2));
        if (dist+r2<=r1)
            cout << "RICO" << endl;
        else
            cout << "MORTO" << endl;
    }

    return 0;
}
