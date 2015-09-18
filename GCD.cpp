#include <iostream>
using namespace std;
int gcd(int a , int b){
  if(a<b) swap(a,b);
  if(a%b==0)  return b;
  int temp;
  while(b>1){
    temp=a;
    a=b;
    b=temp%b;
  }
  return b==0?a:b;
}
int gcd_rec(int a , int b){
  if(a<b) swap(a,b);
  if(a%b==0)  return b;
  if(b==1)    return 1;
  return gcd(b,a%b);
}
int main(){
  int a , b;
  cin>>a>>b;
  int g=gcd_rec(a,b);
  cout<<g;
}
