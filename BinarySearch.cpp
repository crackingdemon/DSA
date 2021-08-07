#include <iostream>
using namespace std;

int binarysearch(int arr[], int n , int key ){
int s =0;
int e=n;
while(s<=e){
  int m =(s+e)/2;
  if(arr[m]==key){
    return m;
  }
  else if(arr[m]>key){
    e=m-1;
  }
  else{
    s=m+1;
  }
}

}

int main() {
 int n;
 cin>>n;

 int arr[n];
 for(int i =0;i<n;i++){
   cin>>arr[i];
 }
 int key;
 
 cin>>key;

 cout<<binarysearch(arr, n,key);
 return 0;
}