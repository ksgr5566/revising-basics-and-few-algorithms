#include <bits/stdc++.h>
using namespace std;
#define ll long long

void fastio(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
}

int main(){
  fastio();
  int n;cin>>n;
  ll arr[n],turns=0;
  cin>>arr[0];
  for(int i=1;i<n;i++){
    cin>>arr[i];
    if(arr[i]<arr[i-1]){
      turns+=arr[i-1]-arr[i];
      arr[i]=arr[i-1];
    }
  }
  cout<<turns;
  return 0;
}
