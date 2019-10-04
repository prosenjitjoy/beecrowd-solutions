#include <iostream>
#include <vector>
#include <list>

using namespace std;

int main()
{
    int n, x, y;
    while (cin >> n)
    {
        if (n==0)
            break;
        list<int>l;
        vector<int>v;
        for (int i=0; i<n; ++i)
            l.push_back(i+1);
        while (l.size()>=2)
        {
            x=l.front();
            v.push_back(x);
            l.pop_front();
            y=l.front();
            l.pop_front();
            l.push_back(y);
        }
        cout << "Discarded cards: ";
        for (int i=0; i<v.size(); ++i)
        {
            cout << v[i];
            if (i!=v.size()-1)
                cout << ", ";
        }
        cout << endl;
        cout << "Remaining card: " << l.back() << endl;
    }
    return 0;
}
