#include <iostream>

using namespace std;

int main()
{
    int a, b;

    cin >> a >> b;
    if ((a>=0 && a<=96) && (b>=0 && b<=2))
        cout << "nova" << endl;
    else if ((a>=0 && a<=96) && (b>=3 && b<=96))
    {
        if (a<b)
            cout << "crescente" << endl;
        else
            cout << "minguante" << endl;
    }
    else if ((a>=3 && a<=100) && (b>=97 && b<=100))
        cout << "cheia" << endl;
    else if ((a>=97 && a<=100) && (b>=3 && b<=96))
        cout << "minguante" << endl;

    return 0;
}
