#include <iostream>
#define ll long long
using namespace std;

int main()
{
    int n;
    cin>>n;
    ll mod=(ll)(1e9+7);
    ll result=1;
    //n there are two choices for each i where i is from 1 to n so
    //total number of permutations is 2 power n
    //never use pow func -- it only works for small inputs
    //(a· b) mod m = (a mod m· b mod m) mod m
    for(int i=1;i<=n;i++){
      result=2*result%mod;;
    }
    cout<<result;
    return 0;
}
