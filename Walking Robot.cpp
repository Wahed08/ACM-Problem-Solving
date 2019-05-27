#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,b,a;
    cin>>n>>b>>a;
    int x=b,y=a;
    int arr[n];
    int sum=0;
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    for(int i=0; i<n; i++)
    {
         if(arr[i]==1)
        {
            if(a==y){
                sum++;
                a--;
            }
          else if(b>0)
            {

                b--;
                sum++;
                if(a<y){
                    a++;
                }

            }
            else if(a>0)
            {
                a--;
                sum++;
            }

        }
        else
        {
            if(a>0)
            {
                a--;
                sum++;
            }
            else if(b>0)
            {
                b--;
                sum++;
            }
        }
        if(a==0 && b==0 || sum==n)
            break;

    }
    cout<<sum<<endl;

    return 0;
}
