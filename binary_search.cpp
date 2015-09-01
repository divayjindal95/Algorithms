#include<iostream>
using namespace std;




int bin_search(int key ,int l , int h , int arr[] ){
  int mid;
  while(l<=h){
    mid=(l+h)/2;
    if(arr[mid]==key) return mid;
    if(arr[mid]<=key) l=mid+1;
    else              h=mid-1;
  }
  return -1;
}

int rec_bin_search(int key , int l , int h , int arr[]){
  if(l>h)
    return -1;
  int mid=(l+h)/2;
  if(arr[mid]==key)   return mid;
  if(arr[mid]<key)    return rec_bin_search(key,mid+1,h,arr);
  else                return rec_bin_search(key,l,mid-1,arr);
}


int main(){
    int a[5] , key;
    for(int i=0;i<5;i++)
      a[i]=i;
    cin>>key;
    int k;
    k=rec_bin_search(key,0 , 4, a);
    cout<<k;
  }
