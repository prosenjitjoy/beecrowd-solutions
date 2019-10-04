#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

int main()
{
    string s;
    double d, a=0.0, b, c=0.0;
    while (getline(cin, s), cin>>d)
    {
        cin.ignore();
        a+=d;
        c=c+1.0;
    }
    b=a/c;
    cout << fixed << setprecision(1)<< b << endl;
    return 0;
}
