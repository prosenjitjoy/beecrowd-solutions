#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int t, n1, n2, d1, d2, w, x, y, z, g;
    char c, d;
    cin >> t;
    while (t--)
    {
        cin >> n1 >> d >> d1 >> c >> n2 >> d >> d2;
        switch(c)
        {
        case '+':
            w=d2*n1+d1*n2;
            x=d1*d2;
            g=__gcd(w, x);
            y=w/g;
            z=x/g;
            if (z<0)
            {
                z*=-1;
                x*=-1;
            }
            cout << w << "/" << x << " = " << y << "/" << z << endl;
            break;
        case '-':
            w=d2*n1-d1*n2;
            x=d1*d2;
            g=__gcd(w, x);
            y=w/g;
            z=x/g;
            if (z<0)
            {
                z*=-1;
                y*=-1;
            }
            cout << w << "/" << x << " = " << y << "/" << z << endl;
            break;
        case '*':
            w=n1*n2;
            x=d1*d2;
            g=__gcd(w, x);
            y=w/g;
            z=x/g;
            if (z<0)
            {
                z*=-1;
                y*=-1;
            }
            cout << w << "/" << x << " = " << y << "/" << z << endl;
            break;
        case '/':
            w=n1*d2;
            x=d1*n2;
            g=__gcd(w, x);
            y=w/g;
            z=x/g;
            if (z<0)
            {
                z*=-1;
                y*=-1;
            }
            cout << w << "/" << x << " = " << y << "/" << z << endl;
            break;
        }
    }

    return 0;
}
