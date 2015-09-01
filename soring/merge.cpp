#include <iostream>
using namespace std;

void merge(int *a , int n , int l , int mid , int h){
  int n1=mid-l+1;
  int n2=h-mid;
  int arr1[n1]  ,  arr2[n2];
  for (int  i = 0; i<n1; i++)
    arr1[i]=a[i+l];

  for(int i=0;i<n2;i++)
    arr2[i]=a[i+mid+1];

  int i=0 , j=0  , k=l;
  while(i<n1&&j<n2){
    if(arr1[i]<=arr2[j]){
      a[k]=arr1[i];
      k++;
      i++;
    }
    else{
      a[k]=arr2[j];
      k++;
      j++;
    }
  }
  while(i<n1)
    a[k++]=arr1[i++];
  while (j<n2)
    a[k++]=arr2[j++];
}

void mergesort(int *a , int n , int l , int h){
  if(l>=h)
    return;

  int mid=(l+h)/2;
  mergesort(a, n  , l , mid);
  mergesort(a , n , mid+1 , h);
  merge(a,n,l,mid,h);
}


int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  mergesort(arr,n , 0 , n-1);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

}
