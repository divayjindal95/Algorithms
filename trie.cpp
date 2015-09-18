#include <iostream>
#include <cstdlib>
using namespace std;
typedef struct trie_node  trie_node;
struct trie_node{
  int value=0;
  trie_node *character[26]={NULL};
};

int index(char c){
  return tolower(c)-'a';
}
void insert(trie_node **root , string s){
  int len=s.length();
  trie_node *temp=*root;
  for(int i=0;i<len;i++){
    if(temp->character[index(s[i])]==0)
      temp->character[index(s[i])]=new trie_node;
    temp=temp->character[index(s[i])];
  }
  temp->value=1;
}
int search(trie_node *root,string s){
  int len=s.length();
  int i=0;
  while (i<len&&root->character[index(s[i])]!=0) {
    root=root->character[index(s[i])];
    i++;
  }
  if(i<len||root->value!=1)
    return -1;
  return 1;

}
int main(){
    trie_node *t1=new trie_node;
    insert(&t1,"divay");
    insert(&t1,"jindal");
    insert(&t1,"dog");
    cout<<search(t1,"divay");


}
