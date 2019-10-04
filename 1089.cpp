#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, x, c;

    while (1)
    {
        cin >> n;
        if (n==0)
            break;
        c=0;
        vector<int>v;
        vector<char>s;

        while (n--)
        {
            cin >> x;
            v.push_back(x);
        }
        v.push_back(v[0]);
        v.push_back(v[1]);

        for (int i=0; i<v.size()-1; ++i)
        {
            if (v[i]<=v[i+1])
                s.push_back('u');
            else
                s.push_back('d');
        }
        for (int i=0; i<s.size()-1; ++i)
        {
            if (s[i]!=s[i+1])
                c++;
        }
        cout << c << endl;
    }

    return 0;
}
