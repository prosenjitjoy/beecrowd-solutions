#include <iostream>
#include <string>
#include <sstream>

using namespace std;

int main()
{
    string s;
    int x;
    while (1)
    {
        cin >> s;
        if (s[0]=='-')
            break;
        x=0;
        if (s.size()>1 && s[1]=='x')
        {
            stringstream ss;
            ss  << s ;
            ss >> hex >> x ;
            cout << x << endl;
        }
        else
        {
            stringstream c(s);
            c >> x;
            stringstream ss;
            ss << uppercase << hex << x;
            string res="0x";
            res=res+ss.str();
            cout << res << endl;
        }
    }
    return 0;
}
