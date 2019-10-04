#include <iostream>
#include <cmath>

using namespace std;

double a(double x, double y)
{
    double a, b;
    a=3*x;
    a=pow(a, 2);
    b=pow(y, 2);
    return a+b;
}

double b(double x, double y)
{
    double a, b;
    a=pow(x, 2);
    a=2*a;
    b=pow(5*y, 2);
    return a+b;
}

double c(double x, double y)
{
    double a, b;
    a=-100*x;
    b=pow(y, 3);
    return a+b;
}

int main()
{
    int n, x, y;
    double p, q, r, t;
    cin >> n;
    while (n--)
    {
        cin >> x >> y;
        p=a(x, y);
        q=b(x, y);
        r=c(x, y);
        t=p>q?(p>r?p:r):(q>r?q:r);
        if (p==t)
            cout << "Rafael";
        if (q==t)
            cout << "Beto";
        if (r==t)
            cout << "Carlos";
        cout << " ganhou" << endl;
    }
    return 0;
}
