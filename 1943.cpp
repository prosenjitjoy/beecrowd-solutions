#include <iostream>

using namespace std;

int main()
{
    int n, x;

    cin >> n;

    cout << "Top ";

    if (n==1)
        x=1;
    else if (n<=3)
        x=3;
    else if (n<=5)
        x=5;
    else if (n<=10)
        x=10;
    else if (n<=25)
        x=25;
    else if (n<=50)
        x=50;
    else
        x=100;

    cout << x << endl;

    return 0;
}
