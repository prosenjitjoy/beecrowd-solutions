#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int a, b, c;
    bool flag;
    string s;

    while (cin >> a >> b)
    {
        c=0;
        for (int i=a; i<=b; ++i)
        {
            s=to_string(i);
            flag=true;
            vector<int>v(10, 0);

            for (int j=0; j<s.size(); ++j)
                v[s[j]-'0']++;

            for (int j=0; j<v.size(); ++j)
            {
                if (v[j]>1)
                {
                    flag=false;
                    break;
                }
            }
            if (flag)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
