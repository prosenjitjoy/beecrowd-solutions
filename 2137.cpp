#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    string s;
    while (cin >> n)
    {
        vector<string>v;
        while (n--)
        {
            cin >> s;
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        for (int i=0; i<v.size(); ++i)
            cout << v[i] << endl;
    }
    return 0;
}
