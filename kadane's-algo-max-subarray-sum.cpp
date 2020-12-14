//Given an array of n numbers, our task is to calculate the maximum subarray sum, i.e., the largest possible sum of a sequence of consecutive values in the array.
//Example : −1 2 4 −3 5 2 −5 2
// Ans: 2+4+(-3)+5+2 = 10
//Time Complexity :  O(n)
//reference : Competitive Programmer’s Handbook by Antti Laaksonen

#include <iostream>
using namespace std;
#define ll long long
#define rep(i,a,b) for(ll i=a;i<b;i++)

int main(){
  ll n;
  cin>>n;ll array[n],best = 0, sum = 0;
  rep(k,0,n){
    cin>>array[k];
    sum = max(array[k],sum+array[k]);
    best = max(best,sum);
  }
  cout << best << "\n";
  return 0;
}

/* Naive Alogorithm O(n^2):
int best = 0;
for (int a = 0; a < n; a++){
 int sum = 0;
 for (int b = a; b < n; b++) {
   sum += array[b];
   best = max(best,sum);
 }
}
cout << best << "\n"; */

/*Naive Algorithm O(n^3):
int best = 0;
for (int a = 0; a < n; a++) {
  for (int b = a; b < n; b++) {
    int sum = 0;
    for (int k = a; k <= b; k++) {
      sum += array[k];
    }
    best = max(best,sum);
  }
}
cout << best << "\n"; */
