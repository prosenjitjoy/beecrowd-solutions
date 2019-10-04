#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    int n, x;
    string s="ABCDE";
    while (cin >> n)
    {
        if (n==0)
            break;
        while (n--)
        {
            vector<int>v;
            for (int i=0; i<5; ++i)
            {
                cin >> x;
                if (x<=127)
                    v.push_back(i);
            }
            if (v.size()!=1)
                cout << "*" << endl;
            else
                cout << s[v[0]] << endl;
        }
    }
    return 0;
}
