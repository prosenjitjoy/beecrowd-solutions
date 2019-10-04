#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, x, c;
    while (1)
    {
        cin >> n >> m;
        if (n==0 && m==0)
            break;
        c=0;
        vector<int>v(20000, 0);
        for (int i=0; i<m; ++i)
        {
            cin >> x;
            v[x-1]++;
            if (v[x-1]==2)
                c++;
        }
        cout << c << endl;
    }
    return 0;
}
