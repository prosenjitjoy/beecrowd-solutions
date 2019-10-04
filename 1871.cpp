#include <iostream>
#include <string>

using namespace std;

int main()
{
    int a, b, c;
    while (1)
    {
        cin >> a >> b;
        if (a==0 && b==0)
            break;
        c=a+b;
        string s=to_string(c);
        for (int i=0; i<s.size(); ++i)
        {
            if (s[i]!='0')
                cout << s[i];
        }
        cout << endl;
    }
    return 0;
}
