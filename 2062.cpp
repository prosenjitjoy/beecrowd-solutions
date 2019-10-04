#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> s;
        if (s.size()==3 && s[0]=='O' && s[1]=='B' && s[2]!='I')
            cout << "OBI";
        else if (s.size()==3 && s[0]=='U' && s[1]=='R' && s[2]!='I')
            cout << "URI";
        else
            cout << s;
        if (n!=0)
            cout << " ";
    }
    cout << endl;
    return 0;
}
