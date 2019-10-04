#include <iostream>
#include <vector>
#include <stack>
#include <string>

using namespace std;

int main()
{
    string s, a="<i>", b="</i>", c="<b>", d="</b>";
    while (getline(cin, s))
    {
        stack<char>it, bo;
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i]!='_' && s[i]!='*')
                cout << s[i];
            else if (s[i]=='_')
            {
                if(it.empty())
                {
                    it.push(s[i]);
                    cout << a;
                }
                else
                {
                    if (it.top()=='_')
                    {
                        it.pop();
                        cout << b;
                    }
                }
            }
            else if (s[i]=='*')
            {
                if(bo.empty())
                {
                    bo.push(s[i]);
                    cout << c;
                }
                else
                {
                    if (bo.top()=='*')
                    {
                        bo.pop();
                        cout << d;
                    }
                }
            }
        }
        cout << endl;
    }
    return 0;
}
