#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
struct node{
  int x;
  struct node *next=NULL;
};

bool isEmpty(struct node **top){
  return *top==NULL:
}
void pop(struct node **top){
  *top=(*top)->next;
}
void push(struct node **top){
    if(*top==NULL){
      *top=new node;
      (*top)->data=data;
      (*top)->next=NULL;
      return;
    }
    struct node new_node=new node;
    new_node->data=data;
    new_node->next=*top;
    *top=new_node;
    return;
}
int main(){
    struct node *top=NULL;
