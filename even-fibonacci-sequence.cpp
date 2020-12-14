#include <iostream>
using namespace std;
#define ll long long

/*Recurrence for Even Fibonacci sequence is:
  Nth even fib  = 4 ( (n-1) even fib )  + (n-2)nd even fib */

int main(){
   ll x;
   cin>>x;
   int zero_even_fibonacci = 0 , first_even_fibonacci = 2;
   cout<<zero_even_fibonacci<<" "<<first_even_fibonacci<<" ";
   ll a=0 ,b=2, c=2;
   while(c<=x){
     c=4*b+a;
     a=b;
     b=c;
     if(c>x) break;
     cout<<c<<" ";
   }
   return 0;
}
