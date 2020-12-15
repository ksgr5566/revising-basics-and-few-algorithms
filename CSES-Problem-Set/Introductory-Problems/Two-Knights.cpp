#include <bits/stdc++.h>
using namespace std;
#define ll long long


/*Concept:

Total number of permutation (no.of ways 2 pieces can be arranged in an nxn matrix) = n^2 ! / (n^2 - 2)! = n^2 (n^2 - 1)
Since two pieces are similar the total no. of ways will be = n^2 (n^2 - 1) / 2

Two knights (of different colors) attack each other if they are at opposite corners of a 3×2 or 2×3 rectangle, so we start by counting those rectangles.

Number of 2x3 matrices in an nxn matrix:

The top row of the 2×3 matrix can be in one of the first n−1 rows of the n×n matrix 
(i.e. cannot be the last row, because there won't be"space" for the second row of the 2×3 matrix).

Similarly, the left column of the 2×3 matrix must be one of the first n−2 columns of the n×n matrix. 
It cannot be one of the last two columns, because there won't be enough "space" on the right for the next two columns of the 2×3 matrix.

If you want to do this "mathematically", you would need to label the rows and columns somehow. Let's say that the n×n matrix is in the co-ordinate system positioned
so that the co-ordinates of its vertices are 0≤i,j≤n. Now, let the 2×3 matrix be positioned so that its lower left corner has co-ordinates x,y.
The upper right corner has co-ordinates x+3,y+2. Thus, you are trying to solve the following system of inequalities:

0≤x
x+3≤n
0≤y
y+2≤n

which is equivalent to:

0≤x≤n−3
0≤y≤n−2

from which you can see that there are n−2 solutions for x (x=0,1,2,…,n−3) and n−1 solutions for y (y=0,1,2,…,n−2). The total number of solutions is (n−1)(n−2).

Similarly for 3x2 martrix too.

Hence the total number of rectangles =  2.(n-1)(n-2)

In each rectangle there are two positions for the knights , hence number of attacking positions = 2.2.(n-1)(n-2)

Therefore number of non attacking positions are  =        n^2 (n^2 - 1) / 2     -  2.2.(n-1)(n-2)    */


void fastio(){
  ios::sync_with_stdio(false);
  cin.tie(NULL);cout.tie(NULL);
}

int main(){
  fastio();
  int n;
  cin>>n;
  if (n==1){
    cout<<0;
    return 0;
  }
  cout<<0<<"\n"<<6<<'\n';
  if(n==2)  return 0;  
  for(ll i=3;i<=n;i++){
    ll i2=i*i,tp=i2*(i2-1)/2,ap=4*(i-1)*(i-2);
    cout<<tp-ap<<'\n';
  }
  return 0;
}
