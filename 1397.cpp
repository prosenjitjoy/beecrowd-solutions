#include <iostream>

using namespace std;

int main()
{
    int n, a, b, x, y;
    while (cin >> n)
    {
        if (n==0)
            break;
        x=0;
        y=0;
        while (n--)
        {
            cin >> a >> b;
            if (a>b)
                x++;
            else if (b>a)
                y++;
        }
        cout << x << " " << y << endl;
    }

    return 0;
}
