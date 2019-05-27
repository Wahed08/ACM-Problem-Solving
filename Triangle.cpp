#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int arr[4] = {0};
    for(int i = 0; i < 4; i++)
    {
        scanf("%d", arr + i);
    }
    sort(arr, arr+ 4);

    int l1  = arr[1] + arr[2] - arr[3];
    int l2 = arr[0] + arr[1] - arr[2];

    string str;
    if(l1 > 0 || l2 > 0)
    {
        str = "TRIANGLE";
    }
    else if(l1 == 0 || l2 == 0)
    {
        str = "SEGMENT";
    }
    else
    {
        str = "IMPOSSIBLE";
    }

    cout << str << endl;
    return 0;
}
