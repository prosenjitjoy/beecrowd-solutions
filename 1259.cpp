#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int n, x;
    cin >> n;
    vector<int>o, e;
    while (n--)
    {
        cin >> x;
        if (x%2==0)
            e.push_back(x);
        else
            o.push_back(x);
    }
    sort(e.begin(), e.end());
    sort(o.begin(), o.end(), greater<int>());
    for (int i=0; i<e.size(); ++i)
        cout << e[i] << endl;
    for (int i=0; i<o.size(); ++i)
        cout << o[i] << endl;
    return 0;
}


