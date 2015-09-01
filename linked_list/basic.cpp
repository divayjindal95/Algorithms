//  I the following way
//   ------> () -----> () ------> ()


#include <iostream>
#include <cstdlib>
#include <cstdio>
using namespace std;
struct node{
  int x;
  struct node *next=NULL;
};
void insert(struct node **head , int val){
  if(*head==NULL){
    *head=new node;
    (*head)->x=val;
    return;
  }
  struct node *temp;
  temp=*head;
  while(temp->next!=NULL){
    temp=temp->next;
  }
  temp->next=new node;
  temp->next->x=val;
  return;
}
void insert_after_byNode(struct node **ref , int val){
  struct node *temp;
  temp=new node;
  temp->x=val;
  temp->next=(*ref)->next;
  (*ref)->next=temp;
}
void insert_after_byVal(struct node **head ,  int ref_val , int val){
  struct node *temp=*head;
  while(temp->x==ref_val)
    temp=temp->next;
  struct node *new_node=new node;
  new_node->next=temp->next;
  temp->next=new_node;
}

void delete_last_node(struct node **head){
  struct node *temp=*head , *temp1;
  while(temp->next!=NULL){
    temp1=temp;
    temp=temp->next;
  }
  temp1->next=NULL;
}
int size(struct node **head){
  int len=0;
  struct node *temp=*head;
  while (temp->next!=NULL) {
    len++;
  }
  return len;
}

/****   This in important   ****/
void deleteParticularNode(struct node *node){
  struct node *temp=node->next;
  node->data=temp->data;
  node->next=temp->next;
}
void middle_element(struct node **head){
  struct node *temp=*head , *mid=*head;
  int count=0;
  while (temp!=NULL) {
    if(count&1)
      mid=mid->next;
    temp=temp->next;;
  }
  std::cout << mid->x << std::endl;
}

struct node* iterative_inverse()

bool palindromCheck(struct node **left , struct node *right){
  if(right==NULL)
    return TRUE;
  bool isp=palindromCheck(left,right);
  if((*left)->data==right->data){
    *left=(*left)->next;
    return TRUE;
  }
  return FALSE;
}

int main(){
    struct node *head=NULL;
    insert(&head,5);
    insert(&head,34);
    printf("%d\n",head->next->x );
    delete_node(&head);
}
