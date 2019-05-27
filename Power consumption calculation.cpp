#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);

    int n, P1, P2, P3, T1, T2;
    scanf("%d %d %d %d %d %d", &n, &P1, &P2, &P3, &T1, &T2);

    long total=0, previousTime=INT_MIN;

    for(int k = 0; k < n; k++)
    {

        int start, finish;
        scanf("%d %d", &start, &finish);
        if(previousTime < 0)
        {
            previousTime = start;
        }
        total += P1 * (finish - start);

        int timeIdle = start - previousTime;
        if(timeIdle > T1 + T2)
        {
            total += (timeIdle - T1 - T2) * P3;
            timeIdle = T1+ T2;
        }
        if(timeIdle > T1)
        {
            total += (timeIdle - T1) * P2;
            timeIdle = T1;
        }
        total += timeIdle * P1;

        previousTime = finish;
    }

    printf("%ld\n", total);

    return 0;
}
