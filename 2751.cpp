#include <iostream>
#include <iomanip>
#include <string>
#include <cstdio>

using namespace std;

int main()
{
    int a, b;
    double c, d;
    a=15;
    b=a/2;
    c=15.456;
    d=c/7;
    string s="Valores de b:";
    cout << s << endl;
    for (int i=0; i<s.size(); ++i)
        cout << "-";
    cout << endl;
    cout << "1) b = " << b << endl;
    cout << "2) b = ";
    cout << right << setw(20) << b << endl;
    cout << "3) b = ";
    for (int i=0; i<19; ++i)
        cout << "0";
    cout << b << endl;
    printf("4) b = %-20d\n", b);
    cout << "5) b = " << b << "\%" << endl;
    cout << endl;
    cout << "Valores de d:" << endl;
    for (int i=0; i<s.size(); ++i)
        cout << "-";
    cout << endl;
    cout << "1) d = " << fixed << d << endl;
    cout << "2) d = " << setprecision(0) << d << endl;
    cout << "3) d = " << setprecision(1) << d << endl;
    cout << "4) d = " << setprecision(2) << d << endl;
    cout << "5) d = " << setprecision(3) << d << endl;
    cout << "6) d = " << setprecision(3) << right << setw(20) << d << endl;
    cout << "7) d = ";
    for (int i=0; i<15; ++i)
        cout << "0";
    cout << setprecision(3) << d << endl;
    cout << "8) d = " << setprecision(3) << d;
    for (int i=0; i<15; ++i)
        cout << " ";
    cout << endl;
    cout << "9) d = " << setprecision(2) << d << "\%" << endl;
    return 0;
}
