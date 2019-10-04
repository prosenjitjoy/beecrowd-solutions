#include <iostream>
#include <string>
#include <cctype>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    string s;
    for (int i=0; i<n; ++i)
    {
        cin >> ws;
        getline(cin, s);
        for (int j=0; j<s.size(); ++j)
        {
            if (isalpha(s[j]))
                s[j]+=3;
        }
        reverse(s.begin(), s.end());
        for (int j=s.size()/2; j<s.size(); ++j)
            s[j]--;
        cout << s << endl;
    }
    return 0;
}
