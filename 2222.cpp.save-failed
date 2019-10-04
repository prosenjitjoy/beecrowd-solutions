#include <iostream>
#include <vector>
#include <algorithm>
#include <set>

using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int m, q, a, b, c;
        cin >> m;
        vector<vector<int> >v(m);
        for (int i=0; i<m; ++i)
        {
            int x;
            cin >> x;
            v[i]=vector<int>(x);
            for (int j=0; j<x; ++j)
                cin >> v[i][j];
        }
        cin >> q;
        for (int i=0; i<q; ++i)
        {
            cin >> a >> b >> c;
            vector<int>x, y, z(122);
            vector<int>::iterator it;
            x=v[b-1];
            y=v[c-1];
            sort(x.begin(), x.end());
            sort(y.begin(), y.end());
            if (a==1)
                it=set_intersection(x.begin(), x.end(), y.begin(), y.end(), z.begin());
            else if (a==2)
                it=set_union(x.begin(), x.end(), y.begin(), y.end(), z.begin());
            z.resize(it-z.begin());
            cout << z.size() << endl;
        }
    }
    return 0;
}
