#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <ctype.h>
#include <math.h>
#include <stack>
#include <queue>
#include <map>
#include <set>
#include <vector>
#include <string>
#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
#define ls rt<<1
#define rs ls1
#define lson l,mid,ls
#define rson mid+1,r,rs
#define middle (l+r)>>1
#define eps (1e-9)
#define type int
#define clr_all(x,c) memset(x,c,sizeof(x))
#define clr(x,c,n) memset(x,c,sizeof(x[0])*(n+1))
#define MOD 1000000007
#define inf 0x3f3f3f3f
#define pi acos(-1.0)
#define M 200000+5
char s[10][10]; 
int main(){
    int i,j,cnt=0,t,x=0;
    for(i=0;i<8;i++){
		gets(s[i]);
		t=0;
		for(j=0;j<8;j++)
			if(s[i][j]=='B')t++;
		if(t==8)cnt++;
		else x=t;
	}
	cnt+=x;
    printf("%d\n",cnt);
    return 0;
}
