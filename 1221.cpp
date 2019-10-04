#include <iostream>
#define ull unsigned long long

using namespace std;

bool isPrime(ull int x)
{
    for (ull int i=2; i*i<=x; ++i)
        if (x%i==0)
            return false;
    return true;
}

int main()
{
    ull int n, x;
    cin >> n;
    while (n--)
    {
        cin >> x;
        if (isPrime(x))
            cout << "Prime" << endl;
        else
            cout << "Not Prime" << endl;
    }
    return 0;
}
