#include <iostream>
#define ll long long
using namespace std;

// n/5 + n/5^2 + n/5^3 +...+n/5^k , where k must be chosen such that 5^(k+1)>n

//Example : 32!
// 32/5 + 32/5^2 = 32/5 + 32/25 = 6 + 1 = 7

int main()
{
    ll n;
    cin>>n;
    int count=0;
    for (int i=5;n/i>=1;i*=5){
      count+=n/i;
    }
    cout<<count;
    return 0;
}
