#include <iostream>
#include <string>
#include <sstream>
#include <bitset>
#define ull unsigned long long

using namespace std;

int main()
{
    ull int n, x;
    string s, t;
    cin >> n;
    for (int i=0; i<n; ++i)
    {
        cin >> t >> s;
        cout << "Case " << i+1 << ":" << endl;
        if (s=="bin")
        {
            bitset<64>bits(t);
            cout << bits.to_ullong() << " dec" << endl;
            stringstream ss;
            ss << hex << bits.to_ullong();
            string res=ss.str();
            cout << res << " hex" << endl;
        }
        if (s=="dec")
        {
            x=0;
            bool flag=false;
            stringstream con(t), ss;
            con >> x;
            ss << hex << x;
            string res =ss.str();
            cout << res << " hex" << endl;
            t=bitset<64>(x).to_string();
            for (int j=0; j<t.size(); ++j)
            {
                if (t[j]=='1')
                    flag=true;
                if (flag)
                    cout << t[j];
            }
            cout << " bin" << endl;
        }
        if (s=="hex")
        {
            x=0;
            bool flag=false;
            stringstream ss;
            ss << t;
            ss >> hex >> x;
            cout << x << " dec" << endl;
            t=bitset<64>(x).to_string();
            for (int j=0; j<t.size(); ++j)
            {
                if (t[j]=='1')
                    flag=true;
                if (flag)
                    cout << t[j];
            }
            cout << " bin" << endl;
        }
        cout << endl;
    }
    return 0;
}
