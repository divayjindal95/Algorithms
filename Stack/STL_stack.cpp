// (1st element)<-(2nd element)<-(so on )<-(head)
//LAST In FIRST OUT
// adapter not container
#include <iostream>
#include <stack>
using namespace std;

int main(){
  stack<int> s;
  s.push(0);
  s.push(23);
  s.pop();
  cout<<s.top();        // Returns the refernce to the element.
  s.empty();
  s.size();
  s,emplace();
  stack<int> t;
  s.swap(t);      //swaps the elements of s &t;
}
