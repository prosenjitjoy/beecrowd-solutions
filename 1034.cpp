#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int t, n, m, x, c;
    cin >> t;
    while (t--)
    {
        cin >> n >> m;
        vector<int>v, a;
        c=0;
        while (n--)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end(), greater<int>());
        for (int i=0; i<v.size(); ++i)
        {
            while(m>=v[i])
            {
                m-=v[i];
                a.push_back(v[i]);
            }
        }
        cout << a.size() << endl;
    }
    return 0;
}
