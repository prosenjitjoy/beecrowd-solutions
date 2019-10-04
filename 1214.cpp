#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int main()
{
    double n, x, y, a, b, c, d;
    cin >> n;
    while (n--)
    {
        cin >> x;
        a=0.0;
        c=0.0;
        vector<double>v;
        while (x--)
        {
            cin >> y;
            a+=y;
            v.push_back(y);
        }
        b=a/v.size();
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i]>b)
                c=c+1.0;
        }
        d=(c*100.0)/v.size();
        cout << fixed << setprecision(3) << d << "%" << endl;
    }
    return 0;
}
