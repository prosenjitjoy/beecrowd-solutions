#include <iostream>
#include <vector>
#include <algorithm>
#include <utility>

using namespace std;

int main()
{
    int a, b, x, i=0;
    while (cin >> a >> b)
    {
        if (a==0 && b==0)
            break;
        vector<int>v;
        vector<pair<int,int>>p;
        vector<int>::iterator it;
        while (a--)
        {
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(), v.end());
        while (b--)
        {
            cin >> x;
            it=find(v.begin(), v.end(), x);
            if (it!=v.end())
                p.push_back(make_pair(x,distance(v.begin(), it)+1));
            else
                p.push_back(make_pair(x,-1));
        }
        cout << "CASE# " << ++i << ":" << endl;
        for (int i=0; i<p.size(); ++i)
        {
            if (p[i].second!=-1)
                cout << p[i].first << " found at " << p[i].second << endl;
            else
                cout << p[i].first << " not found" << endl;
        }
    }

    return 0;
}
