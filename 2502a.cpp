#include <iostream>
#include <string>
#include <algorithm>
#include <cctype>
#include <vector>
#include <utility>

using namespace std;

char build(vector<pair<char,char> >v, char c)
{
    char s, r;
    if (c==' ')
        return c;
    if (islower(c))
    {
        s=c-'a'+'A';
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i].first==s)
            {
                r=v[i].second;
                return r-'A'+'a';
            }
            else if (v[i].second==s)
            {
                r=v[i].first;
                return r-'A'+'a';
            }
        }
        return c;
    }
    else if (isupper(c))
    {
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i].first==c)
            {
                r=v[i].second;
                return r;
            }
            else if (v[i].second==c)
            {
                r=v[i].first;
                return r;
            }
        }
        return c;
    }
    else if (c=='.' || c==',' || c==';' || c==':' || c=='(' || c==')' || c=='!' || c=='?' || (c>='0' && c<='9'))
    {
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i].first==c)
            {
                r=v[i].second;
                return r-'A'+'a';
            }
            else if (v[i].second==c)
            {
                r=v[i].first;
                return r-'A'+'a';
            }
        }
        return c;
    }
    else if (c==' ')
    {
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i].first==c)
            {
                r=v[i].second;
                return r-'A'+'a';
            }
            else if (v[i].second==c)
            {
                r=v[i].first;
                return r-'A'+'a';
            }
        }
        return c;
    }
}

int main()
{
    int c, n;
    while (cin >> c >> n)
    {
        vector<pair<char,char> >v(c);
        string s1, s2, str;
        fflush(stdin);
        getline(cin, s1);
        fflush(stdin);
        getline(cin, s2);
        cout << s1 << " " << s2 << endl;
        for (int i=0; i<c; ++i)
        {
            v[i].first=s1[i];
            v[i].second=s2[i];
        }

        for (int i=0; i<n; ++i)
        {
            fflush(stdin);
            getline(cin, str);
            for (int j=0; j<str.size(); ++j)
            {
                char c=build(v, str[j]);
                cout << c;
            }
            cout << endl;
        }
        cout << endl;
    }

    return 0;
}
