#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n;
    char a, b, c, p, q, r;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        a=0;
        b=0;
        c=0;
        if (s.size()==5)
            cout << 3 << endl;
        else
        {
            if (s[0]=='o')
                a=1;
            if (s[1]=='n')
                b=1;
            if (s[2]=='e')
                c=1;
            if (s[0]=='t')
                p=1;
            if (s[1]=='w')
                q=1;
            if (s[2]=='o')
                r=1;
            if (a&&b || b&&c || c&&a)
                cout << 1 << endl;
            else if (p&&q || q&&r || r&&p)
                cout << 2 << endl;
        }
    }
    return 0;
}
