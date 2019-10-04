#include <iostream>
#include <cctype>

using namespace std;

int main()
{
    int n, a, b, d;
    char c;
    cin >> n;
    while (n--)
    {
        cin >> a >> c >> b;
        if (a==b)
            d=a*b;
        else if (isupper(c))
            d=b-a;
        else
            d=a+b;
        cout << d << endl;
    }

    return 0;
}
