#include <iostream>

using namespace std;

int main()
{
    int h1, m1, h2, m2, x1, x2, x;
    while (cin >> h1 >> m1 >> h2 >> m2)
    {
        if (h1==0 && m1==0 && h2==0 && m2==0)
            break;
        x1=(h1*60)+m1;
        x2=(h2*60)+m2;

        if (x2 > x1)
            cout << x2-x1 << endl;
        else
        {
            x=1440-x1;
            x+=x2;
            cout << x << endl;
        }
    }
    return 0;
}

