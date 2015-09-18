#include <iostream>
#include <set>
#include <cmath>
using namespace std;
set<int> prime_factors(int n){
  set<int> s;
  for(int i=2;i<=sqrt(n);i++){
    if(n%i==0){
        s.insert(i);
        n/=i;
        i=1;
      }
  }
  s.insert(n);
  return s;
}
int main(){
  int n;
  cin>>n;
  set<int> s=prime_factors(n);
  set<int>::iterator it;
  for(it=s.begin();it!=s.end();it++)
    cout<<*it<<" ";

}
