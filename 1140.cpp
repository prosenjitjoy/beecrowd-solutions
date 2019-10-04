#include <iostream>
#include <vector>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    char l, u;
    bool yes;
    while (1)
    {
        getline(cin,s);
        yes=true;
        if (s=="*")
            break;
        if (isupper(s[0]))
        {
            u=s[0];
            l=s[0]-'A'+'a';
        }
        else if (islower(s[0]))
        {
            l=s[0];
            u=s[0]-'a'+'A';
        }
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i]==' ')
            {
                if (s[i+1]!=l && s[i+1]!=u)
                {
                    yes=false;
                    break;
                }
            }
        }
        if (yes)
            cout << "Y" << endl;
        else
            cout << "N" << endl;
    }
    return 0;
}
