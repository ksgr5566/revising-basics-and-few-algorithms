#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
void fastio(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
}
 
int main(){
  fastio();
  string s;cin>>s;
  ll before=1,after=1;
  for(ll i=0;i<(ll)s.size()-1;i++){
    if(s[i]==s[i+1]) before++;
    else{
      after=max(after,before);
      before=1;
    }
  }
  after=max(after,before);
  cout<<after;
  return 0;
}
