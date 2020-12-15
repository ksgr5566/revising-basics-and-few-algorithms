#include <stdio.h>
/* if a=bq+r then gcd(a,b) = gcd(b,r)
  r = a%b
  gcd(b,r)=gcd(r,r') r'=b%r
  do this recursively until r' is 0
  if r' is 0 gcd is r */

int gcd (int,int);

int main(void){
  int a,b;
  scanf("%d %d",&a,&b);
  printf("%d",gcd(a,b));
  return 0;
}

int gcd(int a,int b){
  if(b==0) return a;
  else return gcd(b,a%b);
}
