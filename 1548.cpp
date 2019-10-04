#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x, y, z;
    cin >> n;
    while (n--)
    {
        cin >> x;
        vector<int>v, c;
        z=0;
        while (x--)
        {
            cin >> y;
            v.push_back(y);
        }
        c=v;
        sort(v.begin(), v.end(), greater<int>());
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i]==c[i])
                z++;
        }
        cout << z << endl;
    }
    return 0;
}
