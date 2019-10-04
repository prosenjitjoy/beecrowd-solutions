#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, r, x;
    while (cin >> n >> r)
    {
        vector<int>v(n, 0);
        for (int i=0; i<r; ++i)
        {
            cin >> x;
            v[x-1]++;
        }

        for (int i=0; i<v.size(); ++i)
        {
            if (v[i]==0)
                cout << i+1 << " ";
        }
        if (n==r)
            cout << "*" << endl;
        else
            cout << endl;
    }
    return 0;
}
