#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, r, x;
    char c;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> ws;
        cin >> s;
        cin >> r;
        for (int i=0; i<s.size(); ++i)
        {
            x=s[i]-'A';
            x-=r;
            x%=26;
            if (x<0)
                x+=26;
            c=x+'A';
            cout << c;
            if (i==s.size()-1)
                cout << endl;
        }
    }
    return 0;
}
