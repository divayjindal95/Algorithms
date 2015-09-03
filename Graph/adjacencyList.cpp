#include <iostream>
#include <vector>
#include <map>
using namespace std;

void addEdge(int a, int b , int W ,vector<map<int,int> > v){}

struct node{
  int E;
  int W;
};
int main(){
  int V;
  cin>>V;
  int flag=0;
  std::vector< std::vector<struct node*> > N;
  while (flag!=1) {
    int a , b , W;
    cin>>a>>b>>W;
    node *edge=new node;
    edge->E=b;
    edge->W=W;
    N[a].push_back(edge);
  }

}
