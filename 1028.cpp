#include <iostream>

using namespace std;

int gcd(int a, int b)
{
    if (b==0)
        return a;
    return gcd(b, a%b);
}

int main()
{
    int n, f1, f2, x;
    cin >> n;
    while (n--)
    {
        cin >> f1 >> f2;
        x=gcd(f1, f2);
        cout << x << endl;
    }
    return 0;
}
