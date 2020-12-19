#include <bits/stdc++.h>
using namespace std;

bool possible(string s[8], int x, int y) {
	//Column
	for (int k = 0; k < x; k++) {
		if (s[k][y] == '1') {
			return false;
		}
	}
	//present to top left diagonally 
	int i = x, j = y;
	while (i >= 0 and j >= 0) {
		if (s[i][j] == '1') {
			return false;
		}
		i--; j--;
	}
	//present to top right diagonally
	i = x, j = y;
	while (i >= 0 and j < 8) {
		if (s[i][j] == '1') {
			return false;
		}
		i--; j++;
	}
	return true;
}

int solve(string s[8],int i){
  if(i==8) return 1;
  int cnt =0;
  // checks all possible permutations
  for(int j=0;j<8;j++){
    if(possible(s,i,j)&&s[i][j]!='*'){
      s[i][j]='1';
      cnt+=solve(s,i+1);
      s[i][j]='.';
    }
  }
  return cnt;
}

int main(){
  string s[8];
  for(int i=0;i<8;i++) cin>>s[i];
  cout << solve(s,0);
  return 0;
}
