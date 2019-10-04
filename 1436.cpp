#include <iostream>
#include <algorithm>
#include <vector>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    for (int i=0; i<t; ++i)
    {
        cin >> n;
        vector<int>v;
        for (int j=0; j<n; ++j)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        cout << "Case " << i+1 << ": " << v[v.size()/2] << endl;
    }
    return 0;
}
