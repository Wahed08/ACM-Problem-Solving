#include<bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin>>str;
    int sum=0,flag=0,cnt=0;

    int n=str.length();
    for(int i=0; i<str.length(); i++)
    {
        if(str[i]=='a')
        {
            sum++;
        }
        else
            flag++;
    }
    if(sum>flag)
    {
        cout<<str.length()<<endl;
        return 0;
    }

    else
    {
        do{
            flag--;
            n--;
            cnt++;
        }while(sum<=flag);


    }
    cout<<n<<endl;

    return 0;
}
