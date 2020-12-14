#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
int main(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  ll n;cin>>n;
  ll nn,sum=0,x=n-1;
  while(x--){
    cin>>nn;
    sum+=nn;
  }
  ll xx= (ll)((n*(n+1))/2) - sum ;
  cout<<xx;
  return 0;
}
