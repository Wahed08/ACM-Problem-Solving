#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    long long int n;
    cin>>n;
    long long int arr[n][n],val;
 
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
            cin>>arr[i][j];
        }
    }
    val=sqrt((arr[0][1] * arr[0][2])/arr[1][2]);
    cout<<val<<" ";
 
    for(int i=1; i<n; i++){
        cout<< (arr[0][i])/val <<" ";
    }
    cout<<endl;
 
    return 0;
}
