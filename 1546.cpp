#include <iostream>

using namespace std;

int main()
{
    int n, k, x;
    cin >> n;
    while (n--)
    {
        cin >> k;
        while (k--)
        {
            cin >> x;
            switch(x)
            {
            case 1:
                cout << "Rolien" << endl;
                break;
            case 2:
                cout << "Naej" << endl;
                break;
            case 3:
                cout << "Elehcim" << endl;
                break;
            case 4:
                cout << "Odranoel" << endl;
                break;
            }
        }
    }
    return 0;
}
