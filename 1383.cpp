#include <iostream>
#include <vector>
#include <set>

using namespace std;

int main()
{
    int t, c;
    bool check;
    cin >> t;
    for (int i=0; i<t; ++i)
    {
        vector< vector<int> >v(9, vector<int>(9));
        vector<int>s(27, 0);
        c=0;
        check=true;
        for (int j=0; j<9; ++j)
        {
            set<int>se;
            for (int k=0; k<9; ++k)
            {
                cin >> v[j][k];
                se.insert(v[j][k]);
            }
            if (se.size()==9)
                s[c++]=1;
            else
                s[c++]=0;
        }
        for (int j=0; j<9; ++j)
        {
            set<int>e;
            for (int k=0; k<9; ++k)
                e.insert(v[k][j]);
            if (e.size()==9)
                s[c++]=1;
            else
                s[c++]=0;
        }
        set<int>sa,sb,sc,sd,es,sf,sg,sh,si;
        for (int j=0; j<9; ++j)
        {
            for (int k=0; k<9; ++k)
            {
                if ((j>=0 && j<=2) && (k>=0 && k<=2))
                    sa.insert(v[j][k]);
                if ((j>=3 && j<=5) && (k>=0 && k<=2))
                    sb.insert(v[j][k]);
                if ((j>=6 && j<=8) && (k>=0 && k<=2))
                    sc.insert(v[j][k]);
                if ((j>=0 && j<=2) && (k>=3 && k<=5))
                    sd.insert(v[j][k]);
                if ((j>=3 && j<=5) && (k>=3 && k<=5))
                    es.insert(v[j][k]);
                if ((j>=6 && j<=8) && (k>=3 && k<=5))
                    sf.insert(v[j][k]);
                if ((j>=0 && j<=2) && (k>=6 && k<=8))
                    sg.insert(v[j][k]);
                if ((j>=3 && j<=5) && (k>=6 && k<=8))
                    sh.insert(v[j][k]);
                if ((j>=6 && j<=8) && (k>=6 && k<=8))
                    si.insert(v[j][k]);
            }
        }
        if (sa.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (sb.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (sc.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (sd.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (es.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (sf.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (sg.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (sh.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        if (si.size()==9)
            s[c++]=1;
        else
            s[c++]=0;
        for (int j=0; j<27; ++j)
        {
            if (s[j]!=1)
            {
                check=false;
                break;
            }
        }
        cout << "Instancia " << i+1 << endl;
        if (check)
            cout << "SIM" << endl;
        else
            cout << "NAO" << endl;
        cout << endl;
    }
    return 0;
}
