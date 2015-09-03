#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main(){
  int a[]={2,5,23,67,89,120};     //function returns an iterator to
  int *p=lower_bound(a,a+6,22);   //the first element whose key is not less than k.
  cout<<*p;
  int *q=upper_bound(a,a+6,22);       //the function returns an iterator to
  cout<<*q;                            //the first element whose key is strictly greater than k.
  int *r=find(a,a+6,22);          // strictly finds the key only
  cout<<*r;
}
