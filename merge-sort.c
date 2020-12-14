#include <stdio.h>
#define l end-start
#define mid (start+end)/2
//time complexity : O(nlogn)
void recursive_sort(int[],int,int);
void merge(int[],int,int);

int main(void){
  int n;
  scanf("%d",&n);
  int a[n];
  for(int i=0;i<n;i++) scanf("%d",&a[i]);
  recursive_sort(a,0,n);
  for(int i=0;i<n;i++) printf("%d ",a[i]);
  printf("\n");
  return 0;
}

void recursive_sort(int arr[],int start,int end){
  if(l>0){
    recursive_sort(arr,start,mid);
    recursive_sort(arr,mid+1,end);
    merge(arr,start,end);
  }
}

void merge(int arr[],int start,int end){
  int temp[end - start + 1];
  int i = start, j = mid+1, k = 0;
  while(i <= mid && j <= end) {
    if(arr[i] <= arr[j]) {
      temp[k] = arr[i];
      k++; i++;
    }
    else {
      temp[k] = arr[j];
      k++; j++;
    }
  }
  while(i <= mid) {
    temp[k] = arr[i];
    k++; i++;
  }
  while(j <= end) {
    temp[k] = arr[j];
    k++; j++;
  }
  for(i = start; i <= end; i++) {
    arr[i] = temp[i - start];
  }
}
