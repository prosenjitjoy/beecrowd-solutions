#include <iostream>
#include <string>

using namespace std;

int fact(int a)
{
    int f=1;
    for (int i=1; i<=a; i++)
        f*=i;
    return f;
}

int main()
{
    int x, y, z;
    string s;
    while (1)
    {
        cin >> s;
        if (s=="0")
            break;
        z=0;
        for (int i=0; i<s.size(); ++i)
        {
            x=s[i]-'0';
            y=s.size()-i;
            z+=(x*fact(y));
        }
        cout << z << endl;
    }
    return 0;
}
