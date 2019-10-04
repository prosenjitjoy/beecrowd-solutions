#include <iostream>
#include <string>
#include <cctype>
#include <set>

using namespace std;

int main()
{
    int n, x, y, z;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> ws;
        getline(cin,s);
        set<char>c;
        y=z=0;
        for (int i=0; i<s.size(); ++i)
        {
            if (islower(s[i]))
                c.insert(s[i]);
        }
        if (c.size()==26)
            cout << "frase completa" << endl;
        else if (c.size()>=13)
            cout << "frase quase completa" << endl;
        else
            cout << "frase mal elaborada" << endl;
    }
    return 0;
}
