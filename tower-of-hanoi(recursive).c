//This code is self explanatory 
#include<stdio.h>
#include<stdlib.h>

int moves=0;
void solve_for(int,char,char,char);

int main(void){
  int n;
  printf("Start Positon is 'A'\n");
  printf("Destination position is 'B'\n");
  printf("Spare position is 'X'\n\n");
  printf("Enter number of discs : ");
  scanf("%d",&n);
  solve_for(n,'A','B','X');
  printf("Number of moves: %d",moves);
  return 0;
}

void solve_for(int boxes,char start,char destination,char spare){
  if(boxes<=0) exit(0);
  if(boxes==1) {
    moves++;
    printf("Step %d : %c --> %c\n",moves,start,destination);
  }
  else{
    solve_for(boxes-1,start,spare,destination);
    printf("Step %d : %c --> %c\n",moves,start,destination);
    moves++;
    solve_for(boxes-1,spare,destination,start);
  }
}
