#include <iostream>
#include <set>

using namespace std;

int main()
{
    int a, b, x, y, z;
    while (1)
    {
        cin >> a >> b;
        if (a==0 && b==0)
            break;
        set<int>s;
        set<int>::iterator it;
        x=a+b;
        y=(3*a)-x;
        s.insert(y);
        z=(3*b)-x;
        s.insert(z);
        x=x/2;
        s.insert(x);
        it=s.begin();
        cout << *it << endl;
    }
    return 0;
}
