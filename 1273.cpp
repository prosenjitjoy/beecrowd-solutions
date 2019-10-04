#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, l, t;
    string s, z=" ";
    bool flag=false;

    while (1)
    {
        cin >> n;
        if (n==0)
            break;
        if (flag)
            cout << endl;

        flag=true;
        vector<string>v;

        for (int i=0; i<n; ++i)
        {
            cin >> s;
            v.push_back(s);
        }

        l=v[0].size();

        for (int i=0; i<v.size(); ++i)
            if (v[i].size()>l)
                l=v[i].size();

        for (int i=0; i<v.size(); ++i)
        {
            t=l-v[i].size();
            while (t--)
            {
                v[i]=z+v[i];
            }
            cout << v[i] << endl;
        }
    }

    return 0;
}
