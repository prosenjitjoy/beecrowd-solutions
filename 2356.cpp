#include <iostream>
#include <string>

using namespace std;

int main()
{
    string a, b;
    while (cin >> a >> b)
    {
        size_t found=a.find(b);
        if (found!=string::npos)
            cout << "Resistente" << endl;
        else
            cout << "Nao resistente" << endl;
    }
    return 0;
}
