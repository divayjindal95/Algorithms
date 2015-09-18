#include <iostream>
#include <cmath>
using namespace std;

struct node{
  int a;
  int b, mul;
};

//int getSum(struct node *p , int qs , int qe , int l , int h , int index){
//  if(qs<=l&&qe>=h)
//    return p[index];
//  if(qe<l||qs>h)
//    return 0;
//  int mid=(l+h)/2;
//  int sum=getSum(p,qs,qe,l,mid,2*index+1)+getSum(p,qs,qe ,mid+1,h,2*index+2);
//  return sum;
//  }

int construct1(int arr[] , int l , int h , struct node *p , int index){
  if(l==h){
    p[index].a=arr[l];
    return (p[index].a)*(p[index].b);
  }
  int mid=l+(h-l)/2;
  p[index].mul=construct1(arr ,l,mid , p , 2*index+1)+construct1(arr , mid+1 , h , p , 2*index+2);
  return p[index].mul ;
}

int construct2(int arr[] , int l , int h , struct node *p , int index){
  if(l==h){
    p[index].b=arr[l];
    return (p[index].a)*(p[index].b);
  }
  int mid=l+(h-l)/2;
  p[index].mul=construct2(arr ,l,mid , p , 2*index+1)+construct2(arr , mid+1 , h , p , 2*index+2);
  return p[index].mul ;
}

//void updateValueUtil(struct node *p, int ss, int se, int i, int diff, int index){
//    if (i < ss || i > se)
//        return;
//
//    p[index] = p[index] + diff;
//    if (se != ss){
//        int mid = getMid(ss, se);
//        updateValueUtil(p, ss, mid, i, diff, 2*index + 1);
//        updateValueUtil(p, mid+1, se, i, diff, 2*index + 2);
//    }
//}

int main(){
    int n;
    cin>>n;
    int a[n],b[n];
    int num=pow(2,ceil(log2(n)))-1;
    struct node p[num];
    for(int i=0;i<n;i++){
      a[i]=5;
      b[i]=0;
    }
    for(int i=0;i<num;i++){
      p[i].a=0;
      p[i].b=0;
      p[i].mul=0;
    }
    construct1(a, 0, n-1, p, 0);


    for(int i=0;i<num;i++)
      cout<<p[i].mul<<"\n";
    //std::cout  <<getSum(p,1, 4,0,n-1,0);
}
