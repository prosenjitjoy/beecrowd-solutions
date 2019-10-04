#include <iostream>
#include <string>
#include <vector>
#include <cctype>

using namespace std;

int main()
{
    string str;
    int x;
    while (getline(cin, str))
    {
        x=1;
        for (int i=0; i<str.size(); ++i)
        {
            if (isupper(str[i]))
                str[i]=str[i]-'A'+'a';
            if (x==1)
            {
                if (isalpha(str[i]))
                {
                    str[i]=str[i]-'a'+'A';
                    x=0;
                }
            }
            else
            {
                if (isalpha(str[i]))
                    x=1;
            }
        }
        cout << str << endl;
    }
    return 0;
}
