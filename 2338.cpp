#include <iostream>
#include <string>
#include <vector>

using namespace std;

void MorseCode(string s)
{
    string str;
    for (int i=0; i<s.size(); ++i)
    {
        if (s[i]=='+' || s[i]=='_' || s[i]=='$')
        {
            if (str==".-")
                cout << 'a';
            else if (str=="-...")
                cout << 'b';
            else if (str=="-.-.")
                cout << 'c';
            else if (str=="-..")
                cout << 'd';
            else if (str==".")
                cout << 'e';
            else if (str=="..-.")
                cout << 'f';
            else if (str=="--.")
                cout << 'g';
            else if (str=="....")
                cout << 'h';
            else if (str=="..")
                cout << 'i';
            else if (str==".---")
                cout << 'j';
            else if (str=="-.-")
                cout << 'k';
            else if (str==".-..")
                cout << 'l';
            else if (str=="--")
                cout << 'm';
            else if (str=="-.")
                cout << 'n';
            else if (str=="---")
                cout << 'o';
            else if (str==".--.")
                cout << 'p';
            else if (str=="--.-")
                cout << 'q';
            else if (str==".-.")
                cout << 'r';
            else if (str=="...")
                cout << 's';
            else if (str=="-")
                cout << 't';
            else if (str=="..-")
                cout << 'u';
            else if (str=="...-")
                cout << 'v';
            else if (str==".--")
                cout << 'w';
            else if (str=="-..-")
                cout << 'x';
            else if (str=="-.--")
                cout << 'y';
            else if (str=="--..")
                cout << 'z';
            if (s[i]=='_')
                cout << " ";
            if (s[i]=='$')
                cout << endl;
            str.clear();
        }
        else
            str.push_back(s[i]);
    }
}

int main()
{
    int t;
    cin >> t;
    string s;
    getline(cin, s);
    for (int i=0; i<t; ++i)
    {
        vector<int>v;
        getline(cin, s);
        string str;
        for (int j=0; j<s.size(); ++j)
        {
            if (s[j]=='=')
                v.push_back(s[j]);
            if (s[j]=='.')
            {
                if (v.size()==3)
                {
                    str.push_back('-');
                    v.clear();
                }
                else if (v.size()==1)
                {
                    str.push_back('.');
                    v.clear();
                }
                int k=0;
                while (s[j+k]=='.')
                    k++;
                if (k==7)
                {
                    str.push_back('_');
                    j+=k-1;
                }
                else if (k==3)
                {
                    str.push_back('+');
                    j+=k-1;
                }
            }
        }
        if (v.size()==3)
        {
            str.push_back('-');
            v.clear();
        }
        else if (v.size()==1)
        {
            str.push_back('.');
            v.clear();
        }
        str.push_back('$');
        MorseCode(str);
    }
    return 0;
}
