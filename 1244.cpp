#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <sstream>
#include <utility>

using namespace std;

bool compare(pair<string,int>&a, pair<string,int>&b)
{
    if (a.first.length()==b.first.length())
        return a.second<b.second;
    return a.first.length()>b.first.length();
}

int main()
{
    int n, i;
    string s;
    cin >> n;
    while (n--)
    {
        cin >> ws;
        getline(cin, s);
        vector< pair<string,int> >v;
        stringstream ss(s);
        string word;
        int c=0;
        while(ss >> word)
        {
            v.push_back(make_pair(word, c));
            c++;
        }
        sort(v.begin(), v.end(), compare);
        for (i=0; i<v.size()-1; ++i)
            cout << v[i].first << " ";
        cout << v[i].first << endl;
    }
    return 0;
}
