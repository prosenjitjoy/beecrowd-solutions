#include <iostream>
#include <stack>

using namespace std;

int main()
{
    int n, x;
    bool yes;
    while (1)
    {
        cin >> n;
        if (n==0)
            break;
        while (1)
        {
            stack<int>s, t, f;
            cin >> x;
            if (x==0)
                break;
            else
                s.push(x);
            yes=true;
            for (int i=0; i<n-1; ++i)
            {
                cin >> x;
                s.push(x);
            }
            while (!s.empty())
            {
                if (s.top()==n)
                {
                    f.push(s.top());
                    s.pop();
                }
                else
                {
                    if (f.empty())
                    {
                        if (t.empty())
                        {
                            t.push(s.top());
                            s.pop();
                        }
                        else
                        {
                            if (s.top()==t.top()+1)
                            {
                                t.push(s.top());
                                s.pop();
                            }
                            else
                            {
                                yes=false;
                                break;
                            }
                        }
                    }
                    else
                    {
                        if (s.top()==f.top()-1)
                        {
                            f.push(s.top());
                            s.pop();
                        }
                        else if (t.empty())
                        {
                            t.push(s.top());
                            s.pop();
                        }
                        else
                        {
                            while (!t.empty() && t.top()==f.top()-1)
                            {
                                f.push(t.top());
                                t.pop();
                            }
                            if (t.empty())
                                continue;
                            if (s.top()==f.top()-1)
                            {
                                f.push(s.top());
                                s.pop();
                            }
                            else if (s.top()==t.top()+1)
                            {
                                t.push(s.top());
                                s.pop();
                            }
                            else
                            {
                                yes=false;
                                break;
                            }
                        }
                    }
                }
            }

            while (!t.empty())
            {
                f.push(t.top());
                t.pop();
            }

            if (yes)
                cout << "Yes" << endl;
            else
                cout << "No" << endl;
        }
        cout << endl;
    }
    return 0;
}
