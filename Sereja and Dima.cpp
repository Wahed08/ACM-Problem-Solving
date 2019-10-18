using namespace std;
 
int main()
{
    int n,sum=0,cnt=0;
    cin>>n;
    int arr[n];
 
    for(int i=0; i<n; i++)
    {
        cin>>arr[i];
    }
    int x=0;
    int y=n-1;
 
    for(int i=0; i<n; i++)
    {
        if(i%2==0)
        {
            if(arr[y]>arr[x])
            {
                sum+=arr[y];
                --y;
            }
            else if(arr[x]>arr[y])
            {
                sum+=arr[x];
                x++;
            }
            else
                sum+=arr[x];
        }
        else
        {
            if(arr[y]>arr[x])
            {
                cnt+=arr[y];
                --y;
            }
            else if(arr[x]>arr[y])
            {
                cnt+=arr[x];
                x++;
            }
            else
                cnt+=arr[x];
        }
    }
 
    cout<<sum<<" "<<cnt<<endl;
 
    return 0;
}
