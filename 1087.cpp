#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int x1, y1, x2, y2;
    while (cin >> x1 >> y1 >> x2 >> y2)
    {
        if (!(x1 && y1 && x2 && y2))
            break;
        vector<vector<int>>v(8, vector<int>(8));
        x1--;
        y1--;
        int x=x1+y1;
        v[x1][y1]=1;
        for (int i=0; i<v.size(); ++i)
        {
            for (int j=0; j<v[i].size(); ++j)
            {
                if (i==x1 || j==y1)
                    v[i][j]=1;
                if ((x1+y1)%2==0)
                {
                    if (x==i+j || ((i+j)%2==0 && i!=j))
                        v[i][j]=1;

                }

            }
        }
        for (int i=0; i<v.size(); ++i)
        {
            for (int j=0; j<v[i].size(); ++j)
                cout << v[i][j] << " ";
            cout << endl;
        }
    }
    return 0;
}
