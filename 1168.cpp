#include <iostream>
#include <string>

using namespace std;

int main()
{
    int n, l;
    cin >> n;
    string s;
    for (int i=0; i<n; ++i)
    {
        cin >> ws;
        cin >> s;
        l=0;
        for (int j=0; j<s.size(); ++j)
        {
            switch(s[j])
            {
            case '0':
                l+=6;
                break;
            case '1':
                l+=2;
                break;
            case '2':
                l+=5;
                break;
            case '3':
                l+=5;
                break;
            case '4':
                l+=4;
                break;
            case '5':
                l+=5;
                break;
            case '6':
                l+=6;
                break;
            case '7':
                l+=3;
                break;
            case '8':
                l+=7;
                break;
            case '9':
                l+=6;
                break;
            }
        }
        cout << l << " leds" << endl;
    }
    return 0;
}
