#include <cstdio>
#include <iostream>
#include <sstream>
#include <string>
#include <cctype>

using namespace std;

void decode(char c)
{
    if (c=='G' || c=='Q' || c=='a' || c=='k' || c=='u')
        printf("0");

    else if (c=='I' || c=='S' || c=='b' || c=='l' || c=='v')
        printf("1");

    else if (c=='E' || c=='O' || c=='Y' || c=='c' || c=='m' || c=='w')
        printf("2");

    else if (c=='F' || c=='P' || c=='Z' || c=='d' || c=='n' || c=='x')
        printf("3");

    else if (c=='J' || c=='T' || c=='e' || c=='o' || c=='y')
        printf("4");

    else if (c=='D' || c=='N' || c=='X' || c=='f' || c=='p' || c=='z')
        printf("5");

    else if (c=='A' || c=='K' || c=='U' || c=='g' || c=='q')
        printf("6");

    else if (c=='C' || c=='M' || c=='W' || c=='h' || c=='r')
        printf("7");

    else if (c=='B' || c=='L' || c=='V' || c=='i' || c=='s')
        printf("8");

    else if (c=='H' || c=='R' || c=='j' || c=='t')
        printf("9");
}

int main(void)

{
    int i, j, n, c;
    string str;

    cin >> n;

    for (i=0; i<n; ++i)
    {
        cin >> ws;
        getline(cin, str);
        c=0;
        for (int i=0; i<str.size(); ++i)
        {
            if (c>11)
                break;
            if (str[i]!=' ')
            {
                decode(str[i]);
                c++;
            }
        }
        cout << endl;
    }

    return 0;
}
