#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>
#include <cstdlib>

using namespace std;

bool compare(const pair<int,int>&a, const pair<int,int>&b)
{
    if (a.first==b.first)
        return a.second<b.second;
    return a.first<b.first;
}

int main()
{
    int n, x, qt, s;
    cin >> n;
    while (n--)
    {
        cin >> qt >> s;
        vector< pair<int,int> >v;
        for (int i=0; i<qt; ++i)
        {
            cin >> x;
            v.push_back(make_pair(abs(x-s), i));
        }
        sort(v.begin(), v.end(), compare);
        cout << v[0].second+1 << endl;
    }
    return 0;
}
