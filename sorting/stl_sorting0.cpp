#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool cmp(int a , int b){
  return a>b?1:0;
}
bool cmp1(int a ,int b){
  return a<b?1:0;
}

int main(){
  int a[]={4,8,3,2,0,1};

  int n=sizeof(a)/sizeof(a[0]);
  vector<int> myvector(a,a+n);
  std::sort(myvector.begin(),myvector.end());
  std::sort(myvector.begin(),myvector.end(),cmp);//sorts reverse order
  for(int i=0;i<n;i++)
    cout<<myvector[i]<<" ";

  double d[] = {3.14, 1.41, 2.72, 4.67, 1.73, 1.32, 1.62, 2.58};
  std::vector<double> myvector1(d,d+8);
  stable_sort(myvector1.begin(),myvector1.end());
  for(int i=0;i<8;i++)
    cout<<myvector1[i]<<" ";
}
