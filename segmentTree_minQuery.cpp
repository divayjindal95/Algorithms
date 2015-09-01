#include <iostream>
#include <cmath>
#include <cstdio>
using namespace std;

int min(int x , int y){
  return (x < y)? x: y;
}

int construct(int arr[] , int *p  , int l , int h ,int index){
  if(h==l){
    p[index]=arr[l];
    return p[index];
  }
  int mid=(l+h)/2;
  p[index]=min(construct(arr,p,l,mid,2*index+1) , construct(arr , p , mid+1 , h , 2*index+2));
  return p[index];

}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  int num=pow(2,ceil(log2(n)))-1;
  int p[num];
  construct(arr,p,0,n-1,0);
  for(int i=0;i<=num;i++)
    cout<<p[i]<<"\n";

}
