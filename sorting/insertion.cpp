#include <iostream>
using namespace std;

void insertion(int *arr,int n){
  for(int i=1;i<n;i++){
    int j=i;
    while(j>=1&&arr[j]<arr[j-1]){
      swap(arr[j],arr[j-1]);
      j--;
    }
  }
}

int main(){
  int n;
  cin>>n;
  int arr[n];
  for(int i=0;i<n;i++)
    cin>>arr[i];
  insertion(arr,n);
  for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
  }
