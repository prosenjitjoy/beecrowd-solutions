#include <iostream>
#include <vector>
#include <string>
#include <utility>

using namespace std;

int main()
{
    string s, ans;
    vector< pair<string,string> >v;

    v.push_back(make_pair("brasil", "Feliz Natal!"));
    v.push_back(make_pair("alemanha", "Frohliche Weihnachten!"));
    v.push_back(make_pair("austria", "Frohe Weihnacht!"));
    v.push_back(make_pair("coreia", "Chuk Sung Tan!"));
    v.push_back(make_pair("espanha", "Feliz Navidad!"));
    v.push_back(make_pair("grecia", "Kala Christougena!"));
    v.push_back(make_pair("estados-unidos", "Merry Christmas!"));
    v.push_back(make_pair("inglaterra", "Merry Christmas!"));
    v.push_back(make_pair("australia", "Merry Christmas!"));
    v.push_back(make_pair("portugal", "Feliz Natal!"));
    v.push_back(make_pair("suecia", "God Jul!"));
    v.push_back(make_pair("turquia", "Mutlu Noeller"));
    v.push_back(make_pair("argentina", "Feliz Navidad!"));
    v.push_back(make_pair("chile", "Feliz Navidad!"));
    v.push_back(make_pair("mexico", "Feliz Navidad!"));
    v.push_back(make_pair("antardida", "Merry Christmas!"));
    v.push_back(make_pair("canada", "Merry Christmas!"));
    v.push_back(make_pair("irlanda", "Nollaig Shona Dhuit!"));
    v.push_back(make_pair("belgica", "Zalig Kerstfeest!"));
    v.push_back(make_pair("italia", "Buon Natale!"));
    v.push_back(make_pair("libia", "Buon Natale!"));
    v.push_back(make_pair("siria", "Milad Mubarak!"));
    v.push_back(make_pair("marrocos", "Milad Mubarak!"));
    v.push_back(make_pair("japao", "Merii Kurisumasu!"));

    while (cin >> s)
    {
        ans="--- NOT FOUND ---";
        for (int i=0; i<v.size(); ++i)
        {
            if (v[i].first==s)
            {
                ans=v[i].second;
                break;
            }
        }
        cout << ans << endl;
    }
    return 0;
}
