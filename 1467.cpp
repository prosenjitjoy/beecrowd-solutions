#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int a, b, c, o, z;
    while (cin >> a >> b >> c)
    {
        o=0;
        z=0;
        if (a==0)
            z++;
        else
            o++;
        if (b==0)
            z++;
        else
            o++;
        if (c==0)
            z++;
        else
            o++;
        if (z==3 || o==3)
            cout << "*" << endl;
        else
        {
            if (o>z)
            {
                if (a==0)
                    cout << "A" << endl;
                if (b==0)
                    cout << "B" << endl;
                if (c==0)
                    cout << "C" << endl;

            }
            if (o<z)
            {
                if (a==1)
                    cout << "A" << endl;
                if (b==1)
                    cout << "B" << endl;
                if (c==1)
                    cout << "C" << endl;
            }
        }
    }
    return 0;
}
