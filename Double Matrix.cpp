#include<bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    int n,m;
    cin>>n>>m;
    int arr1[100][100],arr2[100][100];

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr1[i][j];
        }
    }

    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
            cin>>arr2[i][j];
            if(arr1[i][j]>arr2[i][j])
            {
                swap(arr1[i][j],arr2[i][j]);
            }

        }
    }
    for(int i=1; i<=n; i++)
    {
        for(int j=1; j<=m; j++)
        {
             if(arr1[i][j]<=arr1[i-1][j] || arr1[i][j]<=arr1[i][j-1] || arr2[i][j]<=arr2[i-1][j] || arr2[i][j]<=arr2[i][j-1])
            {
                cout<<"Impossible"<<endl;
                return 0;
            }
        }
    }
    cout<<"Possible"<<endl;

    return 0;
}
