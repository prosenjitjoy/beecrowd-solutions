#include <iostream>
#include <vector>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    while (1)
    {
        cin >> n;
        if (n==0)
            break;
        vector< pair<int,int> >v;
        for (int i=0; i<n; ++i)
        {
            cin >> x;
            v.push_back(make_pair(x, i+1));
        }
        sort(v.begin(),v.end(), greater<pair<int,int>>());
        cout << v[1].second << endl;
    }
    return 0;
}
