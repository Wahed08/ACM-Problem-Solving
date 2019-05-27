#include<bits/stdc++.h>
using namespace std;

char s[100005],sa[105],sb[105];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0),cout.tie(0);

    scanf("%s%s%s",s,sa,sb);

        int l=strlen(s);
        int la=strlen(sa);
        int lb=strlen(sb);
        int flag1=0,pos=0,flag2=0,flag3=0,flag4=0;
        for(int i=0;i<l;i++)
        {
            flag1=1;
            for(int j=0;j<la;j++)
            {
                if(s[i+j]!=sa[j])
                {
                    flag1=0;
                    break;
                }
            }
            if(flag1==1)
            {
                pos=i+la;
                break;
            }
        }
        if(flag1==1)
        {
            for(int i=pos;i<l;i++)
            {
                flag2=1;
                for(int j=0;j<lb;j++)
                {
                    if(s[i+j]!=sb[j])
                    {
                        flag2=0;
                        break;
                    }
                }
                if(flag2==1)
                break;
            }
        }
      
        for(int i=l-1;i>=0;i--)
        {
            flag3=1;
            for(int j=0;j<la;j++)
            {
                if(s[i-j]!=sa[j])
                {
                    flag3=0;
                    break;
                }
            }
            if(flag3==1)
            {
                pos=i-la;
                break;
            }
        }
        for(int i=pos;i>=0;i--)
        {
            flag4=1;
            for(int j=0;j<lb;j++)
            {
                if(s[i-j]!=sb[j])
                {
                    flag4=0;
                    break;
                }
            }
            if(flag4==1)
            break;
        }
        if(flag2==1 && flag4==1)
        {
            printf("both\n");
        }
        else if(flag2==1)
        {
            printf("forward\n");
        }
        else if(flag4==1)
        {
            printf("backward\n");
        }
        else
        printf("fantasy\n");

    return 0;
}
