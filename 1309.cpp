#include <iostream>
#include <string>
#include <cmath>


using namespace std;

int main()
{
    int x, y, z;
    string s, a="$", b=",", c=".", d, ans;
    while (cin >> s >> d)
    {
        z=0;
        ans="";
        for (int i=s.size()-1; i>=0; --i)
        {
            z++;
            ans+=s[i];
            if (z==3 && i!=0)
            {
                ans+=b;
                z=0;
            }
        }
        cout << a;
        for (int i=ans.size()-1; i>=0; --i)
            cout << ans[i];
        cout << c;
        if (d.size()==2)
            cout << d << endl;
        else
            cout << "0" << d << endl;
    }
    return 0;
}
