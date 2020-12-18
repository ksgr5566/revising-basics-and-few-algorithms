#include <bits/stdc++.h>
using namespace std;

int main(){
  string s;cin>>s;
  int alph[26]{0};
  int b=0;
  for(auto c:s) alph[c-'A']++;
  for(auto c:alph) if(c%2!=0) b++;
  if(b>1) {
    cout << "NO SOLUTION" ;
    return 0;
  }
  char bet[26];int j=0;
  for(int i=65;i<91;i++){
    bet[j]=i;
    j++;
  }
  vector<char> v; int x;
  for(int i=0;i<26;i++){
    if(alph[i]%2==0){
      for(j=0;j<alph[i]/2;j++)
      v.push_back(bet[i]);
    }
    else x=i;
  }
  for(auto f:v){
    cout << f ;
  }
  if(b!=0) for(j=0;j<alph[x];j++) cout << bet[x];
  reverse(v.begin(),v.end());
  for(auto f:v){
    cout << f ;
  }
  return 0;
}
