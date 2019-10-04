#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int p, n, a, b, c;
    string s;
    while (cin >> s >> p)
    {
        c=0;
        vector<char>v;
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i]=='W')
            {
                c++;
                a=v.size()/p;
                b=v.size()%p;
                c+=a;
                if (b>0)
                    c++;
                v.clear();
            }
            else
                v.push_back(s[i]);
        }
        a=v.size()/p;
        b=v.size()%p;
        c+=a;
        if (b>0)
            c++;
        cout << c << endl;
    }
    return 0;
}
