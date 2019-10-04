#include <iostream>
#include <string>
#include <stack>

using namespace std;

int main()
{
    string str;
    bool isCorrect;
    while (cin >> str)
    {
        stack<char>s;
        isCorrect=true;
        for (int i=0; i<str.size(); ++i)
        {
            if (str[i]=='(')
                s.push(str[i]);
            if (str[i]==')')
            {
                if (s.empty())
                {
                    isCorrect=false;
                    break;
                }
                if (s.top()=='(')
                    s.pop();
            }
        }
        if (isCorrect==false)
            cout << "incorrect" << endl;
        else
        {
            if (s.empty())
                cout << "correct" << endl;
            else
                cout << "incorrect" << endl;
        }
    }
    return 0;
}
