#include <stdio.h>
//time complexity : O(n^2)
int main(void){
 int n;
 printf("Enter length of sequence=");
 scanf("%d",&n);
 printf("\nEnter your sequence(give spaces after each letter)=");
 int a[n];
 for(int i=0;i<n;i++) scanf("%d",&a[i]);
 printf("Unsorted Sequence=[");
 for(int i=0;i<n;i++) printf("%d,",a[i]);
 printf("\b]");
 printf("\nSorted Sequence=[");
 int temp,ctr=0;
 for(int outer=0;outer<n;outer++){
   for (int inner=0;inner<n-outer-1;inner++){
     if (a[inner]>a[inner+1]){
       temp=a[inner+1];
       a[inner+1]=a[inner];
       a[inner]=temp;
       ctr++;
     }
   } 
 }   
 for(int i=0;i<n;i++) printf("%d,",a[i]);
 printf("\b]");
 printf("\nNo. of swaps : %d",ctr);
 return 0;
}
