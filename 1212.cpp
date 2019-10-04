#include <iostream>
#include <string>

using namespace std;

int main()
{
    int x, y, z, p, q, r;
    string a, b, c="0";
    while (1)
    {
        cin >> a >> b;
        if (a=="0" && b=="0")
            break;

        if (a.size()<b.size())
        {
            p=b.size()-a.size();
            while (p--)
            {
                a=c+a;
            }
        }
        else if (b.size()<a.size())
        {
            p=a.size()-b.size();
            while (p--)
            {
                b=c+b;
            }
        }

        q=r=0;

        for (int i=a.size()-1; i>=0; --i)
        {
            x=a[i]-'0';
            y=b[i]-'0';
            z=x+y+q;
            if (z>9)
            {
                q=1;
                r++;
            }
            else
                q=0;
        }
        if (r==1)
            cout << r << " carry operation." << endl;
        else if (r>1)
            cout << r << " carry operations." << endl;
        else
            cout << "No carry operation." << endl;
    }
    return 0;
}
