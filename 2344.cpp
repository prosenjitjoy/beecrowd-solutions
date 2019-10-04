#include <iostream>

using namespace std;

int main()
{
    int a;
    cin >> a;
    if (a==0)
        cout << "E" << endl;
    else if (a<=35)
        cout << "D" << endl;
    else if (a<=60)
        cout << "C" << endl;
    else if (a<=85)
        cout << "B" << endl;
    else if (a<=100)
        cout << "A" << endl;
    return 0;
}
