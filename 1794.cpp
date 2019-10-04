#include <iostream>

using namespace std;

int main()
{
    int n, a, b, c, d;
    cin >> n;
    cin >> a >> b;
    cin >> c >> d;
    if ((n>=a && n<=b) && (n>=c && n<=d))
        cout << "possivel" << endl;
    else
        cout << "impossivel" << endl;
    return 0;
}
