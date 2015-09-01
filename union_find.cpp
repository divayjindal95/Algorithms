#include <iostream>
#include <vector>
using namespace std;

int find( std::vector<int> arr[]; , int a , int b){
  return arr[a]=arr[b];
}

std::vector<int>  union(std::vector<int> arr[]; , int a , int b){
  int n=sizeof(arr)/sizeof(arr[0]);
  for(int i=0;i<n;i++)
    if(arr[i]==arr[b])
      arr[i]=arr[a];
  return arr;
}

int main(){
  std::vector<int> v[5];
  for(int i=0;i<5;i++)
    v[i]=i;
  cout<<find(v,1,4);
}
