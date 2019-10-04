#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int n, s;
    while (1)
    {
        cin >> n;
        s=0;
        if (n==0)
            break;
        for (int i=0; i<n; ++i)
            s+=pow(i+1, 2);
        cout << s << endl;
    }

    return 0;
}
