#include <iostream>
#include <string>
#include <cctype>

using namespace std;

int main()
{
    string s;
    int a;
    char ch;
    while (getline(cin,s))
    {
        for (int i=0; i<s.size(); ++i)
        {
            if (islower(s[i]))
            {
                a=s[i]-'a';
                a=(a+13)%26;
                ch=a+'a';
            }
            else if (isupper(s[i]))
            {
                a=s[i]-'A';
                a=(a+13)%26;
                ch=a+'A';
            }
            else
                ch=s[i];
            cout << ch;
        }
        cout << endl;
    }
    return 0;
}
