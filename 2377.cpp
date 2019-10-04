#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d, x, y, z;
    cin >> a >> b >> c >> d;
    x=a/b;
    y=a%b;
    z=((x*b)*c)+(y*c);
    z+=x*d;
    cout << z << endl;
    return 0;
}
