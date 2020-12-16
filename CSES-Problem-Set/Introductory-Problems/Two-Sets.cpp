#include <iostream>
#include <vector>
#define ll long long
using namespace std;

int main(){
  ll n;
  cin>>n;
  ll En2 = n*(n+1)/2;
  //if sum of numbers is even
  if(En2%2!=0) cout<<"NO";
  else{
    cout<<"YES\n";
   /*For this case, then the sum of each subset is half of the sum of the first N natural number.
     Iterate through the numbers from N to 1 if the number is less than or equal to the required sum then we include this number
     otherwise if the number is greater than the required sum then we ignore the number and include the number which is equal to the required sum.*/
  //For even generalozation is done but its not required
  /*  if(n%2==0){
      cout<<n/2<<'\n';
      ll st=1,ed=n;
      for(;st<ed;st+=2,ed-=2){
        cout<<st<<" "<<ed<<" ";
      }
      cout<<'\n'<<n/2<<"\n";
      st=2;ed=n-1;
      for(;st<ed;st+=2,ed-=2){
        cout<<st<<" "<<ed<<" ";
      }
    }else{*/
      vector<ll>v1,v2;
      ll sum = 0;
      ll val = En2/2;
      for(ll i=n;i>=1;i--){
        sum+=i;
        if(sum<=val) {
          v1.push_back(i);
        }
        else{
          v2.push_back(i);
          sum-=i;
        }
      }
      cout<<v1.size()<<'\n';
      for(auto i:v1) cout<<i<<" ";
      cout<<"\n"<<v2.size()<<"\n";
      for(auto i:v2) cout<<i<<" ";
    //}
  }
  return 0;
}
