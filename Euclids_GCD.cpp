#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int euclids(int n ,int m){
  if(n%m==0)  return m;
  if(n<m)   swap(n,m);
  while(m>1){
    n=n%m;
    swap(n,m);
  }
  return n;
}

int main() {
    int n,m;
    cin>>n>>m;
    std::cout <<euclids(n,m)<< std::endl;
    return 0;
}
