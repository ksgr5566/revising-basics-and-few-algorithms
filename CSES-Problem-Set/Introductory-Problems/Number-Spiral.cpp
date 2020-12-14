#include <bits/stdc++.h>
using namespace std;
#define ll long long
 
//do not use pow func
 
void fastio(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
}
 
int main(){
  fastio();
  ll t;cin>>t;
  while(t--){
    ll x,y;
    cin>>y>>x;
    if(y%2==0&&x<=y) cout<<y*y-x+1<<'\n';
    else if(y%2==1&&x<=y) cout<<(y-1)*(y-1)+x<<'\n';
    else if(x%2==1&&y<=x) cout<<x*x-y+1<<'\n';
    else if(x%2==0&&y<=x) cout<<(x-1)*(x-1)+y<<'\n';
  }
  return 0;
}
