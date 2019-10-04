#include <iostream>
#include <string>
#include <set>
#define ull unsigned long long

using namespace std;

ull int fact(ull int a)
{
    ull int f=1;
    for (ull int i=1; i<=a; ++i)
    {
        f*=i;
    }
    return f;
}

int main()
{
    ull int x;
    string s;
    while (1)
    {
        cin >> s;
        if (s=="0")
            break;
        set<char>st;
        for (int i=0; i<s.size(); ++i)
        {
            st.insert(s[i]);
        }
        x=fact(st.size());
        cout << x << endl;
    }
    return 0;
}
