#include <iostream>
using namespace std;
//Given : (a,b,c,d)
//Solve : ab+bc+cd+ac+ad+bd
//Logic : (a+b+c+d)² = a² + b² + c² + d² + 2 (ab + ac + ad + bc + bd + cd)
//Time Complexity : O(n)
int main(){
   int n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++){
     cin>>arr[i];
   }
   int sum=0,sqsum=0;
   for(int i=0;i<n;i++){
     sum=sum+arr[i];
   }
   for(int i=0;i<n;i++){
     sqsum=sqsum+arr[i]*arr[i];
   }
   int ans=((sum*sum)-sqsum)/2;
   cout<<ans;
   return 0;
}
