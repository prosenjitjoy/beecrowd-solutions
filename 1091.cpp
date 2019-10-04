#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, y, a, b, p, q;
    while (cin >> n)
    {
        if (n==0)
            break;
        cin >> x >> y;
        while (n--)
        {
            cin >> a >> b;
            p=a-x;
            q=b-y;
            if (p==0 || q==0)
                cout << "divisa" << endl;
            else if (p>0 && q>0)
                cout << "NE" << endl;
            else if (p>0 && q<0)
                cout << "SE" << endl;
            else if (p<0 && q>0)
                cout << "NO" << endl;
            else if (p<0 && p<0)
                cout << "SO" << endl;
        }
    }
    return 0;
}
