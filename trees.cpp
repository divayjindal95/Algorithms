#include<iostream>
#include<stdlib.h>
using namespace std;
struct node{
  int key;
  node *left=NULL;
  node *right=NULL;
  node *parent=NULL;
};

struct node* rec_insert(struct node *root , int  key){
  struct node *temp;
  if(root==NULL){
    //root=(struct node*)malloc(sizeof(struct node));
    root=new node;
    root->key=key;
    root->left=NULL;
    root->right=NULL;
    root->parent=NULL;
    return root;
  }

  if(root->key>=key){
    root->left=rec_insert(root->left,key);
    root->left->parent=root;
  }
  else{
    root->right=rec_insert(root->right,key);
    root->right->parent=root;
  }
  return root;

}
struct node* iterative_insert(struct node *root , int key){
  struct node *x , *y;
  x=root;
  y=NULL;
  while(x!=NULL){
    y=x;
    if(x->key<=key)  x=x->left;
    else             x=x->right;
  }
  struct node *z;
  z=new node;
  z->key=key;
  z->left=NULL;
  z->right=NULL;
  z->parent=y;
  if(y==NULL)   return z;
  elseif(z->key<=y->key) y->left=z;
  else                  y->right=z;
  }
  return root;
}
struct node* search(struct node *root,int key){
  if(root==NULL)      return NULL;
  if(root->key==key)  return root;
  if(root->key>key)   return search(root->left);
  else                return search(root->right);
}

struct node* iterative_search(struct node *root ,int key){
  while(1){
    if(root==NULL)  return root;
    if(root->key==key)   return root;
    if(root->key<key) root=root->left;
    else              root=root->right;
  }
  return root;
}

void preorder(struct node *root){

}
int main(){
  struct node *root=NULL;
  int key;
  root=rec_insert(root,5);
  root=rec_insert(root,4);

}
