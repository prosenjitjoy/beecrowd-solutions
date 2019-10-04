#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
    int t, l, h;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> l;
        h=0;
        for (int i=0; i<l; ++i)
        {
            cin >> ws;
            getline(cin,s);
            for (int j=0; j<s.size(); ++j)
                h+=s[j]-'A'+i+j;
        }
        cout << h << endl;
    }
    return 0;
}
