#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int p, c, n, x, y, l=0;
    cin >> p >> c >> n;
    vector<int>v;
    while (n--)
    {
        cin >> x;
        y=x-p;
        cout << "y" << y << endl;
        if (y<0)
            continue;
        if (y<c)
        {
            l++;
            c=y;
        }
        cout << "c" << c << endl;
        cout << "l" << l << endl;
    }
    cout << l << endl;
    return 0;
}
