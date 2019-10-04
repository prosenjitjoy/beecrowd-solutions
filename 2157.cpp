#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, a, b;
    cin >> n;
    while (n--)
    {
        cin >> a >> b;
        string s="", t;
        for (int i=a; i<=b; ++i)
        {
            t=to_string(i);
            s=s+t;
        }
        t=s;
        for (int i=s.size()-1; i>=0; --i)
        {
            t=t+s[i];
        }
        cout << t << endl;
    }
    return 0;
}
