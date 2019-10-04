#include <iostream>
#include <string>
#include <map>

using namespace std;

int main()
{
    int t, n;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> n;
        map<string,int>m;
        map<string,int>::iterator it;
        for (int i=0; i<n; ++i)
        {
            cin >> s;
            m[s]++;
        }
        if (m.size()==1)
        {
            it=m.begin();
            cout << it->first << endl;
        }
        else
            cout << "ingles" << endl;
    }
    return 0;
}
