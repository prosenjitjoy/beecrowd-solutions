#include <iostream>
#include <vector>

using namespace std;

int ssort(vector<int>&a)
{
    int c=0, t;
    for (int i=0; i<a.size()-1; ++i)
    {
        for (int j=i+1; j<a.size(); ++j)
        {
            if (a[i]>a[j])
            {
                t=a[i];
                a[i]=a[j];
                a[j]=t;
                c++;
            }
        }
    }
    return c;
}

int main()
{
    int t, n, x, c;
    cin >> t;
    while (t--)
    {
        cin >> n;
        vector<int>v;
        for (int i=0; i<n; ++i)
        {
            cin >> x;
            v.push_back(x);
        }
        c=ssort(v);
        cout << "Optimal train swapping takes " << c << " swaps." << endl;
    }
    return 0;
}
