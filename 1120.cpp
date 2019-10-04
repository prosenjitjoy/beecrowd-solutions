#include <iostream>
#include <string>

using namespace std;

int main()
{
    char c;
    string s;
    while (cin >> c >> s)
    {
        string a;
        bool zero=false;
        if (c=='0' && s=="0")
            break;
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i]!=c)
            {
                if (s[i]=='0' && zero)
                    a.push_back(s[i]);
                else if (s[i]!='0')
                {
                    a.push_back(s[i]);
                    zero=true;
                }
            }
        }
        if (a.empty())
            cout << 0 << endl;
        else
            cout << a << endl;
    }
    return 0;
}
