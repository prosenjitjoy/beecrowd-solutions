#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n;
    unsigned long long int x;
    double a, b, c;
    cin >> n;
    while (n--)
    {
        cin >> a;
        b=pow(2, a);
        c=b/12000.0;
        x=c;
        cout << x << " kg" << endl;
    }
    return 0;
}
