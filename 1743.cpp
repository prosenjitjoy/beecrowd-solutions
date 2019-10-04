#include <iostream>
#include <vector>

using namespace std;

int main()
{
    bool yes=true;
    vector<int>x(5),y(5);
    for (int i=0; i<5; ++i)
        cin >> x[i];
    for (int i=0; i<5; ++i)
        cin >> y[i];
    for (int i=0; i<5; ++i)
    {
        if (x[i]==y[i])
        {
            yes=false;
            break;
        }
    }
    if (yes)
        cout << "Y" << endl;
    else
        cout << "N" << endl;

    return 0;
}
