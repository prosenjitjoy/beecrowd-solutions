#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n, c;
    string str;
    cin >> n;
    while (n--)
    {
        cin >> str;
        stack<char>s;
        c=0;
        for (int i=0; i<str.size(); ++i)
        {
            if (str[i]=='<')
                s.push(str[i]);
            if (str[i]=='>')
            {
                if (!s.empty() && s.top()=='<')
                {
                    c++;
                    s.pop();
                }
            }
        }
        cout << c << endl;
    }
    return 0;
}
