#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int curr = 0;
  int mx = -1999;
  int n ;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
for (int i = 0;i<n;i++){
  curr=0;
  for ( int j=i;j<n;j++){
    curr+=arr[j];
  }
  cout<<curr<<endl;
}
 
}