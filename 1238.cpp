#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, i, j, x, y;
    cin >> n;
    string s1, s2;
    while (n--)
    {
        cin >> s1 >> s2;
        i=0;
        j=0;
        x=1;
        y=1;
        while (x || y)
        {
            if (i<s1.size())
                cout << s1[i++];
            else
                x=0;
            if (j<s2.size())
                cout << s2[j++];
            else
                y=0;
        }
        cout << endl;
    }
    return 0;
}
