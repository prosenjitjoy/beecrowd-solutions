#include <iostream>
#include <string>
#include <set>

using namespace std;

int main()
{
    int n;
    string s;
    cin >> n;
    set<string>se;
    while (n--)
    {
        cin >> s;
        se.insert(s);
    }
    cout << "Falta(m) " << 151-se.size() << " pomekon(s)." << endl;
    return 0;
}
