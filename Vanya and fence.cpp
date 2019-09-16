#include<iostream>
 
using namespace std;
int main()
{
    int n,h,arr[2004],sum=0;
    cin>>n>>h;
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
        if(arr[i]<=h)
        {
            sum++;
        }
        else if(arr[i]>h)
        {
            sum=sum+2;
        }
    }
    cout<<sum<<endl;
 
    return 0;
}
