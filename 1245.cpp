#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int t, x, p, d, e, ans;
    char c;
    while (cin >> t)
    {
        vector< pair<int,char> >v;
        ans=p=d=e=0;
        while (t--)
        {
            cin >> x >> c;
            v.push_back(make_pair(x,c));
        }
        sort(v.begin(),v.end());
        p=v[0].first;
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i].first==p)
            {
                if (v[i].second=='D')
                    d++;
                else
                    e++;
            }
            else
            {
                p=v[i].first;
                ans+=(d<=e)?d:e;
                d=e=0;
                i--;
            }
        }
        ans+=(d<=e)?d:e;
        cout << ans << endl;
    }
    return 0;
}
