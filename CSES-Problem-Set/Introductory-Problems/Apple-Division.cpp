#include<bits/stdc++.h>
using namespace std;
#define ll long long
//alternative method using bit wise operations ex: x&1<<i ;

//get sum of subarray = x ; total sum=s ; sum of other subarray = s-x;
// total diff = s-x -x = s-2x and minimum of s-2x is required
ll small = INT_MAX;
// runs through all subsets of arr[l..r]
void subsetSums(ll arr[], int l, int r,ll s,ll sum=0){
    // sum of current subset
    if (l > r){
        small=min(small,abs(s-2*sum));
        return;
    }

    // Subset including arr[l]
    subsetSums(arr, l+1, r, s,sum+arr[l]);

    // Subset excluding arr[l]
    subsetSums(arr, l+1, r, s,sum);
}

int main(){
    int n;cin>>n;
    ll a[n],s=0;
    for(int i=0;i<n;i++){
      cin>>a[i];
      s+=a[i];
    }
    subsetSums(a, 0, n-1,s);
    cout << small ;
    return 0;
}
