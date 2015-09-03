#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <cstring>
using namespace std;

int main(){
  int n;
  cin>>n;
  int arr[n/2];
  int sqn=sqrt(n);
  for(int i=0;i<n/2;i++){
    arr[i]=2*(i+1)+1;
  }
  cout<<sqn<<"   ";
  int i=3;
  while(i<=sqn){
    int k=3;
    while(k<=n/3){
        arr[(i*k-1)/2-1]=0;
        k+=2;
      }
    i+=2;
  }
  for(int i=0;i<n/2-1;i++)
    cout<<arr[i]<<" ";
  for(int i=0;i<n/2-1;i++)
    if(arr[i]!=0)
    cout<<arr[i]<<" ";
}
