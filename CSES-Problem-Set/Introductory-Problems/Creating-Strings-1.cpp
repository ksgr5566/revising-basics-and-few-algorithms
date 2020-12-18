#include <bits/stdc++.h>
using namespace std;


// Rearranges the elements in the range [first,last) into the next lexicographically greater permutation.

// http://www.cplusplus.com/reference/algorithm/next_permutation/

int main(){
   string str ;cin >> str;
   sort(str.begin(),str.end());
   vector<string> s;
   s.push_back(str);
   while(next_permutation(str.begin(),str.end()))
      s.push_back(str);
   cout << s.size() << "\n";
   for(auto c:s) cout << c << "\n";
   return 0;
}
