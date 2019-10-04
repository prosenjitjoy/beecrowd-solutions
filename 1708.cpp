#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x, y, z;
    x=0;
    cin >> a >> b;
    c=a;
    d=b;
    while (1)
    {
        x++;
        y=a/c;
        z=b/c;
        if (z>y)
            break;
        a+=c;
        b+=d;
    }
    cout << x+1 << endl;
    return 0;
}
