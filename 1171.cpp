#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int>v;
    vector<pair<int,int>>p;
    while (n--)
    {
        cin >> x;
        v.push_back(x);
    }
    sort(v.begin(), v.end());
    for (int i=0; i<v.size(); ++i)
    {
        if (i==0)
            p.push_back(make_pair(v[i], 1));
        else
        {
            if (v[i]==v[i-1])
                p[p.size()-1].second++;
            else
            {
                p.push_back(make_pair(v[i], 1));
            }
        }
    }
    for (int i=0; i<p.size(); ++i)
        cout << p[i].first << " aparece " << p[i].second << " vez(es)" << endl;

    return 0;
}
