#include <bits/stdc++.h>
using namespace std;

/*Lets say x times we take 2 from a , and 1 from b
and y times we take 2 from b and 1 from a

meaning:
a = 2x + 1y
b = 1x + 2y

on solving for a and b

2a - b = 3x
2b - a = 3y

x and y should be non negative , and from here we can derive (a+b)%3==0.*/

// 0 and 0 test case

int main(){
  int t;cin>>t;
  int a,b;
  while(t--){
    cin>>a>>b;
    if(((a+b)%3 ==0 && 2*a>=b && 2*b>=a) || (a==0&&a==b)) cout<<"YES"<<"\n";
    else cout << "NO" << "\n";
  }
}
