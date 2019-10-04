#include <iostream>

using namespace std;

int main()
{
    int a, b, c, d;
    cin >> a >> b >> c >> d;
    if (b>=a && c>=a && d>=a)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
