#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct node{
  int E;
  int Wt;
};

 vector< std::vector<struct node*> > addEdge(int a, int b , int Wt ,vector< std::vector<struct node*> > Nodes){
  node *edge=new node;
  edge->E=b;
  edge->Wt=Wt;
  Nodes[a].push_back(edge);
  edge->E=b;                    //for undirected
  Nodes[b].push_back(edge);    //for undirected
  return Nodes;
}
void DFS(int u , int *Visited , vector< std::vector<struct node*> > Nodes){
  Visited[u]=1;
  for(int i=0;i<(int)Nodes[u].size();i++){
    int v=Nodes[u][i]->E;
    if(Visited[v]==-1)
      DFS(v,Visited,Nodes);
  }
}
int main(){
  int V;
  cin>>V;
  int flag=0;
  std::vector< std::vector<struct node*> > Nodes(V);
  //MAKE GRAPH
  while (flag!=1) {
    int a , b , Wt=0;
    cin>>a>>b;//>>Wt;
    Nodes=addEdge(a,b,Wt,Nodes);
    cin>>flag;
  }
  int Visited[V];
  for(int i=0;i<V;i++)
    Visited[i]=-1;
  //DFS
  DFS(0,Visited,Nodes);
}
