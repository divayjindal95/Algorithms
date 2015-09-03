#include <iostream>
#include <cstdio>
#include <vector>
#include <map>
using namespace std;

int main(){
  int V;
  cin>>V;
  int mat[V][V];
  int i=0,j=0,W;
  for(int i=0;i<V;i++){
    for(int j=0;j<V;j++){
      cout<<" Add edge from "<<i<<" to "<<j<<" ";
      cin>>W;
      mat[i][j]=W;
    }
  }

}
