#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, l;
    string s1, s2;
    cin >> n;
    while (n--)
    {
        cin >> s1 >> s2;
        l=s1.size()-s2.size();
        if (s2.size()>s1.size())
            cout << "nao encaixa" << endl;
        else
        {
            if (s1.compare(l, s2.size(), s2)==0)
                cout << "encaixa" << endl;
            else
                cout << "nao encaixa" << endl;
        }
    }
    return 0;
}

