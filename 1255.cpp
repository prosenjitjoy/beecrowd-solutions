#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    int t,x, m;
    char ch;
    cin >> t;
    string s;
    while (t--)
    {
        cin >> ws;
        getline(cin, s);
        vector<int>v(26, 0);
        for (int i=0; i<s.size(); ++i)
        {
            if (isupper(s[i]))
            {
                x=s[i]-'A';
                v[x]++;
            }
            else if (islower(s[i]))
            {
                x=s[i]-'a';
                v[x]++;
            }
        }
        m=v[0];
        for (int i=0; i<v.size(); ++i)
            if (v[i]>m)
                m=v[i];
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i]==m)
            {
                ch=i+'a';
                cout << ch;
            }
        }
        cout << endl;
    }
    return 0;
}
