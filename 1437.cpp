#include <iostream>
#include <cstdlib>
#include <string>

using namespace std;

int main()
{
    int n, x, y, z;
    char c;
    string s="NLSO";
    while (cin >> n)
    {
        if (n==0)
            break;
        x=0;
        y=n;
        while (n--)
        {
            cin >> c;
            if (c=='D')
                x++;
            else if (c=='E')
                x--;
        }
        if (x<0)
        {
            x=abs(x);
            x=x%4;
            if (x==0)
                cout << s[x] << endl;
            else
                cout << s[s.size()-x] << endl;
        }
        else
        {
            x=x%4;
            cout << s[x] << endl;
        }
    }
    return 0;
}
