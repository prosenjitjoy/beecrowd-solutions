#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, c=0;
    bool flag;
    cin >> n >> m;
    vector< vector<int> >v(n, vector<int>(m));
    for (int i=0; i<n; ++i)
    {
        flag=true;
        for (int j=0; j<m; ++j)
            cin >> v[i][j];
        for (int j=0; j<m; ++j)
        {
            if (v[i][j]==0)
                flag=false;
        }
        if (flag)
            c++;
    }
    cout << c << endl;
    return 0;
}
