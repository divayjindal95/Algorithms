#include <iostream>
#include <stack>
#include <map>
using namespace std;

char* postfix(string s , std::map<char, int> pre){
  stack<int> mystack;
  int len=s.length();
  int k=0;
  char s1[len];
  for(int i=0;i<len;i++){
    if((s[i]<='Z'&&s[i]>='A')||(s[i]>='a'&&s[i]<='z')){
      s1[k++]=s[i];
    }
    else if(s[i]=='(')
      mystack.push(s[i]);
    else if(s[i]==')'){
      while (mystack.top()!='(') {
        s1[k++]=mystack.top();
        mystack.pop();
      }
      mystack.pop();
    }
    else{
        while(!mystack.empty()&&pre[s[i]]<pre[mystack.top()]){
          s1[k++]=mystack.top();
          mystack.pop();
        }
        mystack.push(s[i]);
      }
    }

  while (!mystack.empty()) {
    s1[k++]=mystack.top();
    mystack.pop();
  }
  for(int i=0;i<len;i++)
    cout<<s1[i];

}


int main(){
  map<char,int> pre;
  pre['(']=pre[')']=-1;
  pre['^']=2;
  pre['*']=pre['/']=1;
  pre['+']=pre['-']=0;


  string s;
  getline(cin , s);
  int len=s.length();
  char *post;
  postfix(s,pre);
  //for(int i=0;i<len;i++)
  //  cout<<post[i];
}
