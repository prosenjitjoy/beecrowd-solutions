#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main()
{
    string s, v="", r="";
    cin >> s;
    for (int i=0; i<s.size(); ++i)
    {
        if (s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
        {
            v=v+s[i];
            r=s[i]+r;
        }
    }
    if (v==r)
        cout << "S" << endl;
    else
        cout << "N" << endl;

    return 0;
}
