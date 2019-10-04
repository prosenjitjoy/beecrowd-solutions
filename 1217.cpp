#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <iomanip>

using namespace std;

int main()
{
    int n, x;
    double a, c=0, m=0;
    string s, w;
    cin >> n;
    for (int i=0; i<n; ++i)
    {
        cin >> a;
        m+=a;
        x=0;
        cin >> ws;
        getline(cin, s);
        stringstream ss(s);
        while (ss >> w)
        {
            x++;
        }
        c+=x;
        cout << "day " << i+1 << ": " << x << " kg" << endl;
    }
    cout << fixed << setprecision(2) << c/n << " kg by day" << endl;
    cout << "R$ " << fixed << setprecision(2) << m/n << " by day" << endl;
    return 0;
}
