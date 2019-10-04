#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    int n;
    char c;
    string str;
    cin >> n;
    c=getchar();
    while (n--)
    {
        getline(cin >> noskipws, str);
        stack<char>s1, s2;
        for (int i=0; i<str.size(); ++i)
        {
            if (i<str.size()/2)
                s1.push(str[i]);
            else
                s2.push(str[i]);
        }
        while (!s1.empty())
        {
            cout << s1.top();
            s1.pop();
        }
        while (!s2.empty())
        {
            cout << s2.top();
            s2.pop();
        }
        cout << endl;
    }
    return 0;
}
