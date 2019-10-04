#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int t, c, x;
    cin >> t;
    string a, b;
    while (t--)
    {
        cin >> ws;
        cin >> a >> b;
        c=0;
        for (int i=0; i<a.size(); ++i)
        {
            if (a[i]>b[i])
                x=26-(a[i]-b[i]);
            else
                x=b[i]-a[i];
            c+=x;
        }
        cout << c << endl;
    }
    return 0;
}
