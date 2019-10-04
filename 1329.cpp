#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n, m, j, x;
    while (cin >> n)
    {
        if (n==0)
            break;
        m=0;
        j=0;
        while (n--)
        {
            cin >> x;
            if (x)
                j++;
            else
                m++;
        }
        cout << "Mary won " << m << " times and John won " << j << " times" << endl;
    }
    return 0;
}

