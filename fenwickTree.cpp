#include <iostream>
using namespace std;

void constructUtil(int arr[] , int *p , int index , int n , int val){
  index+=1;
  while (index<=n) {
    p[index]+=val;
    index+=(index)&(-index);
  }
}


void construct(int ar[] , int *p , int n){

  for(int i=0;i<n;i++)
    constructUtil(arr , p , i , n , arr[i]);


}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int p[n+1]={0};
  construct(arr,p,n);
}
