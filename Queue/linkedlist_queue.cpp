//  I the following way
//  (head) ------> (2nd) -----> (3rd) ------> (4rth)


#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
struct node{
  int data;
  struct node *next=NULL;
};
void push(struct node **first ,struct node **last , int val){
  if(*head==NULL){
    *last=new node;
    (*last)->data=val;
    *head=*last;
    return;
  }
  *last->next=new node;
  *last->next->data=val;
  *last->next->next=NULL;
  *last=(*last)->next;
  return;
}
void pop(struct node **first,struct node **last){
  *first=(*first)->next;
}
int size(struct node **first,struct node **last){
  int len=0;
  struct node *temp=*first;
  while (temp->next!=NULL) {
    len++;
  }
  return len;
}
int main(){
    struct node *first=NULL,*last=NULL;
    insert(&first,&last,5);
    insert(&first,&last,34);
    printf("%d\n",first->next->data );
    delete_node(&first,&last);
}
