#include <iostream>
#define ll long long
using namespace std;

// n/5 + n/5^2 + n/5^3 +...+n/5^k , where k must be chosen such that 5^(k+1)>n

//Example : 32!
// 32/5 + 32/5^2 = 32/5 + 32/25 = 6 + 1 = 7
/*
n = 5: There is one 5 and 3 2s in prime factors of 5! (2 * 2 * 2 * 3 * 5). So count of trailing 0s is 1.

n = 11: There are two 5s and eight 2s in prime factors of 11! (2 8 * 34 * 52 * 7). So count of trailing 0s is 2.

We can easily observe that the number of 2s in prime factors is always more than or equal to the number of 5s. 
So if we count 5s in prime factors, we are done. How to count total number of 5s in prime factors of n!? A simple way is to calculate floor(n/5). 
For example, 7! has one 5, 10! has two 5s. It is not done yet, there is one more thing to consider. 
Numbers like 25, 125, etc have more than one 5. For example if we consider 28!, we get one extra 5 and number of 0s become 6. 
Handling this is simple, first divide n by 5 and remove all single 5s, then divide by 25 to remove extra 5s and so on. 
Following is the summarized formula for counting trailing 0s.

Trailing 0s in n! = Count of 5s in prime factors of n!
                  = floor(n/5) + floor(n/25) + floor(n/125) + ....
 */

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
