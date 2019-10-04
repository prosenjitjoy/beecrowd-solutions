#include <iostream>

using namespace std;

int fibonacci(int n, int *c)
{
    *c=*c+1;
    if (n==0)
        return 0;
    if (n==1)
        return 1;
    return fibonacci(n-1, c)+fibonacci(n-2, c);
}

int main()
{
    int n, f, c, x;
    cin >> n;
    while (n--)
    {
        cin >> f;
        c=-1;
        x=fibonacci(f, &c);
        cout << "fib(" << f << ") = " << c << " calls = " << x << endl;
    }
    return 0;
}
