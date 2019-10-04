#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>

using namespace std;

int main()
{
    int t, m, p;
    double ap, ans;
    string s;
    cin >> t;
    while (t--)
    {
        cin >> m;
        ans=0.0;
        vector<pair<string,double>>v;
        vector<pair<string,double>>::iterator it;
        while (m--)
        {
            cin >> s >> ap;
            v.push_back(make_pair(s,ap));
        }
        cin >> p;
        while (p--)
        {
            cin >> s >> ap;
            it=find_if(v.begin(), v.end(), [&s](const pair<string,double>&el){return el.first==s;});
            if (it!=v.end())
                ans+=it->second*ap;
        }
        cout << fixed << setprecision(2) << "R$ " << ans << endl;
    }
    return 0;
}
