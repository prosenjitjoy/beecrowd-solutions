#include <iostream>
#include <vector>
#include <string>
#include <utility>
#include <cctype>

using namespace std;

int main()
{
    int x;
    string str;
    while (getline(cin, str))
    {

    vector< pair<char,char> >n, a, s;

    n.push_back(make_pair('0', '9'));
    n.push_back(make_pair('1', '`'));
    n.push_back(make_pair('2', '1'));
    n.push_back(make_pair('3', '2'));
    n.push_back(make_pair('4', '3'));
    n.push_back(make_pair('5', '4'));
    n.push_back(make_pair('6', '5'));
    n.push_back(make_pair('7', '6'));
    n.push_back(make_pair('8', '7'));
    n.push_back(make_pair('9', '8'));

    a.push_back(make_pair('A', '`'));
    a.push_back(make_pair('B', 'V'));
    a.push_back(make_pair('C', 'X'));
    a.push_back(make_pair('D', 'S'));
    a.push_back(make_pair('E', 'W'));
    a.push_back(make_pair('F', 'D'));
    a.push_back(make_pair('G', 'F'));
    a.push_back(make_pair('H', 'G'));
    a.push_back(make_pair('I', 'U'));
    a.push_back(make_pair('J', 'H'));
    a.push_back(make_pair('K', 'J'));
    a.push_back(make_pair('L', 'K'));
    a.push_back(make_pair('M', 'N'));
    a.push_back(make_pair('N', 'B'));
    a.push_back(make_pair('O', 'I'));
    a.push_back(make_pair('P', 'O'));
    a.push_back(make_pair('Q', '`'));
    a.push_back(make_pair('R', 'E'));
    a.push_back(make_pair('S', 'A'));
    a.push_back(make_pair('T', 'R'));
    a.push_back(make_pair('U', 'Y'));
    a.push_back(make_pair('V', 'C'));
    a.push_back(make_pair('W', 'Q'));
    a.push_back(make_pair('X', 'Z'));
    a.push_back(make_pair('Y', 'T'));
    a.push_back(make_pair('Z', '`'));

    s.push_back(make_pair('-', '0'));
    s.push_back(make_pair('=', '-'));
    s.push_back(make_pair('[', 'P'));
    s.push_back(make_pair(']', '['));
    s.push_back(make_pair('\\', ']'));
    s.push_back(make_pair(';', 'L'));
    s.push_back(make_pair('\'', ';'));
    s.push_back(make_pair(',', 'M'));
    s.push_back(make_pair('.', ','));
    s.push_back(make_pair('/', '.'));

    for (int i=0; i<str.size(); ++i)
    {
        if (isupper(str[i]))
        {
            x=str[i]-'A';
            cout << a[x].second;
        }
        else if (isdigit(str[i]))
        {
            x=str[i]-'0';
            cout << n[x].second;
        }
        else if (str[i]==' ')
            cout << str[i];
        else
        {
            for (int j=0; j<s.size(); ++j)
            {
                if (s[j].first==str[i])
                {
                    cout << s[j].second;
                    break;
                }
            }
        }
    }
    cout << endl;
    }
    return 0;
}
