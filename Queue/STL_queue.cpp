// (first)---->()---->()----->(last)
// this is also an adapter not container

#include <iostream>
#include <queue>
using namespace std;
int main(){
  queue<int> q;
  q.push(12);
  q.push(14);
  cout<<q.front();
  cout<<q.back();
  cout<<q.size();
  cout<<q.empty();
  //SWAP FUNCTION
  //EMPLACE FUNCTION
  q.pop();
}
