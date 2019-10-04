#include <iostream>

using namespace std;

int main()
{
    double q, d, p, x;
    int y;
    while (1)
    {
        cin >> q;
        if (q==0)
            break;
        x=0;
        cin >> d >> p;
        x=(q*d)/(p-q);
        y=x*p;
        if (y==1)
            cout << y << " pagina" << endl;
        else
            cout << y << " paginas" << endl;
    }
    return 0;
}
