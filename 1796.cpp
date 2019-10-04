#include <iostream>

using namespace std;

int main()
{
    int t, x, o=0, n=0;
    cin >> t;
    while (t--)
    {
        cin >> x;
        if (x==0)
            o++;
        else
            n++;
    }
    if (o>n)
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}
