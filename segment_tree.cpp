#include <iostream>
#include <cmath>
using namespace std;

int getSum(int *p , int qs , int qe , int l , int h , int index){
  if(qs<=l&&qe>=h)
    return p[index];
  if(qe<l||qs>h)
    return 0;
  int mid=(l+h)/2;
  int sum=getSum(p,qs,qe,l,mid,2*index+1)+getSum(p,qs,qe ,mid+1,h,2*index+2);
  return sum;
  }

int construct(int arr[] , int l , int h , int *p , int index){
  if(l==h){
    p[index]=arr[l];
    return p[index];
  }
  int mid=l+(h-l)/2;
  p[index]=construct(arr ,l,mid , p , 2*index+1)+construct(arr , mid+1 , h , p , 2*index+2);
  return p[index] ;
}

int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];
    int num=pow(2,ceil(log2(n)))-1;
    int p[num];
    construct(arr, 0, n-1, p, 0);
    for(int i=0;i<=num;i++)
      cout<<p[i]<<"\n";
    std::cout  <<getSum(p,1, 4,0,n-1,0);
}
