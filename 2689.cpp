#include <iostream>
#include <vector>
#include <cstdlib>
#include <climits>

using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i=0; i<n; ++i)
    {
        vector<int>v(100, 0);
        int arr[3][3], a[3][3];
        for (int j=0; j<3; ++j)
            for (int k=0; k<3; ++k)
                cin >> arr[j][k];

        for (int j=0; j<3; ++j)
        {
            for (int k=0; k<3; ++k)
            {
                if (k==0)
                {
                    a[j][k]=abs(arr[j][k]-arr[j][k+1]);
                    v[a[j][k]]++;
                }
                else
                {
                    a[j][k]=abs(arr[j][k]-arr[j][k-1]);
                    v[a[j][k]]++;
                }
            }
        }

        int maximum=v[0], in=0;
        for (int j=0; j<100; ++j)
        {
            if (v[j]>=maximum)
            {
                maximum=v[j];
                in=j;
            }
        }
        vector<int>t;
        for (int j=0; j<3; ++j)
        {
            for (int k=0; k<3; ++k)
            {
                if (k==0)
                {
                    if (abs(arr[j][k]-arr[j][k+1])!=in && abs(arr[j][k]-arr[j][k+2])!=in)
                        t.push_back(arr[j][k]);
                }
                else if (k==1)
                {
                    if (abs(arr[j][k]-arr[j][k-1])!=in && abs(arr[j][k]-arr[j][k+1])!=in)
                        t.push_back(arr[j][k]);
                }
                else if (k==2)
                {
                    if (abs(arr[j][k]-arr[j][k-2])!=in && abs(arr[j][k]-arr[j][k-1])!=in)
                        t.push_back(arr[j][k]);
                }
            }
        }
        cout << "Possiveis maletas: ";
        for (int j=0; j<t.size(); ++j)
        {
            cout << t[j];
            if (j==t.size()-1)
                cout << ";" << endl;
            else
                cout << ", ";
        }
    }
    return 0;
}
