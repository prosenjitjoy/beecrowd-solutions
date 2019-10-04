#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    int n;
    cin >> n;
    string s;
    while (n--)
    {
        cin >> ws;
        getline(cin, s);
        if (s[0]!='.')
            cout << s[0];
        for (int i=1; i<s.size(); ++i)
        {
            if (isalpha(s[i]))
            {
                if (s[i-1]==' ')
                    cout << s[i];
            }
        }
        cout << endl;
    }
    return 0;
}
