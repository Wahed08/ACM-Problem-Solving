#include<iostream>
#include<string.h>
 
using namespace std;
int main()
{
  char str[105],str1[105];
  cin>>str>>str1;
 
  int len=strlen(str);
 
  for(int i=0; i<len; i++){
    if(str[i]==str1[i]){
        str[i]='0';
    }
    else
        str[i]='1';
  }
    cout<<str<<endl;
 
 return 0;
}
