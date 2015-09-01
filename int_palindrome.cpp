#include <iostream>
#include <cstdio>
#include <vector>
using namespace std;

int check_palindrome(int n){
  int n1=n , i=0;
  while(n1!=0){
    i++;
    n1/=10;
  }
  int v[i] ,j=0;
  while(n!=0){
    v[j]=n%10;
    n/=10;
    j++;
  }
  j=0;
  while(j<=i/2){
    if(v[j]!=v[i-j-1])
      return 0;
    j++;
  }
  return 1;
}
