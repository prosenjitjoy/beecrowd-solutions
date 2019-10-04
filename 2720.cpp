#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>

using namespace std;

#define ull unsigned long long

bool second(const pair<ull int, ull int>&i, const pair<ull int, ull int>&j)
{
    bool a;
    if (i.second==j.second)
        a=i.first<j.first;
    else
        a=i.second>j.second;
    return a;
}
bool first(const pair<ull int, ull int>&i, const pair<ull int, ull int>&j)
{
    return i.first<j.first;
}

int main()
{
    ull int t;
    scanf("%llu", &t);
    for (ull int i=0; i<t; ++i)
    {
        ull int n, k, id, h, w, l;
        vector<pair<ull int, ull int>>v;
        scanf("%llu %llu", &n, &k);
        for (ull int j=0; j<n; ++j)
        {
            scanf("%llu %llu %llu %llu", &id, &h, &w, &l);
            v.push_back(make_pair(id, h*w*l));
        }
        sort(v.begin(), v.end(), second);
        v.resize(k);
        sort(v.begin(), v.end(), first);
        for (ull int j=0; j<v.size(); ++j)
        {
            if (j==v.size()-1)
                printf("%llu", v[j].first);
            else
                printf("%llu ", v[j].first);
        }
        printf("\n");
    }

    return 0;
}
