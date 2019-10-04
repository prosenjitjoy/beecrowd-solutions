#include <iostream>
#include <vector>
#include <utility>

using namespace std;

int main()
{
    int n, m, c, w, x, y, z;
    bool p, q, r, s;

    while (1)
    {
        cin >> n >> m;
        if (n==0 && m==0)
            break;
        c=4;
        p=q=r=s=true;
        vector< vector<int> >v(n, vector<int>(m));
        vector< pair<int,int> >row(n, make_pair(0, 0));
        vector< pair<int,int> >column(m, make_pair(0, 0));

        for (int i=0; i<n; ++i)
            for (int j=0; j<m; ++j)
                cin >> v[i][j];

        for (int i=0; i<n; ++i)
        {
            w=x=0;
            for (int j=0; j<m; ++j)
            {
                if (v[i][j]==0)
                    w=1;
                else
                    x=1;
            }
            row[i].first=w;
            row[i].second=x;
        }
        for (int i=0; i<m; ++i)
        {
            y=z=0;
            for (int j=0; j<n; ++j)
            {
                if (v[j][i]==1)
                    y=1;
                else
                    z=1;
            }
            column[i].first=y;
            column[i].second=z;
        }
        for (int i=0; i<n; ++i)
        {
            if (row[i].first==0 && p)
            {
                c--;
                p=false;
            }
            if (row[i].second==0 && q)
            {
                c--;
                q=false;
            }
        }
        for (int i=0; i<m; ++i)
        {
            if (column[i].first==0 && r)
            {
                c--;
                r=false;
            }
            if (column[i].second==0 && s)
            {
                c--;
                s=false;
            }
        }
        cout << c << endl;
    }
    return 0;
}
