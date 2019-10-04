#include <iostream>
#include <set>

using namespace std;

int main()
{
    int t, n, x;
    cin >> t;
    while (t--)
    {
        cin >> n;
        set<int>s;
        while (n--)
        {
            cin >> x;
            s.insert(x);
        }
        cout << s.size() << endl;
    }
    return 0;
}
