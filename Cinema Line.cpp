#include<bits/stdc++.h>
using namespace std;
 
int main()
{
    int n,ff=0,tf=0,sm;
    cin>>n;
    for(int i=0; i<n; i++)
    {
        cin>>sm;
        if(sm==25)
            tf++;
        else if(sm==50)
        {
            if(tf>=1)
            {
                tf--;
                ff++;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
        else if(sm==100)
        {
            if(tf>=1 && ff>=1)
            {
                tf--;
                ff--;
            }
            else if(tf>=3 && ff==0)
            {
                tf-=3;
            }
            else
            {
                cout<<"NO"<<endl;
                return 0;
            }
        }
    }
    cout<<"YES"<<endl;
 
 
    return 0;
}
