#include <iostream>

using namespace std;

int main()
{
    int a, b, q, r, x, y;

    cin >> a >> b;

    if (a>=0 && b>0)
    {
        q=a/b;
        r=a%b;
    }

    else
    {
        if (a<0 && b>0)
            x=b-1;
        else
            x=b*-1-1;
        while(1)
        {
            y=(a-x)%b;
            if (y==0)
                break;
            x--;
        }
        q=(a-x)/b;
        r=x;
    }

    cout << q << " " << r << endl;

    return 0;
}
