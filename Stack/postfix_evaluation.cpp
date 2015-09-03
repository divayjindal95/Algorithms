#include <iostream>
#include <stack>
#include <map>
using namespace std;

int evaluate(string s,int len){
  stack<int> mystack;
  int res;
  for(int i=0;i<len;i++){
    if((s[i]<='9'&&s[i]>='0'))//||(s[i]>='a'&&s[i]<='z'))
      mystack.push(s[i]-48);

    else{
      int temp,temp1;
      temp=mystack.top();
      mystack.pop();
      temp1=mystack.top();
      mystack.pop();
      if(s[i]=='+') res=temp+temp1;
      if(s[i]=='^') res=temp^temp1;
      if(s[i]=='/') res=temp/temp1;
      if(s[i]=='*') res=temp*temp1;
      if(s[i]=='-') res=temp-temp1;
      mystack.push(res);
    }
    //cout<<mystack.top()<<"\n";
  }
  cout<<mystack.top();
}

int main(){
  string s;
  getline(cin , s);
  int len=s.length();
  evaluate(s,len);
}
