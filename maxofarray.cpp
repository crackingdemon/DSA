#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int mx = -1999;
  int n ;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }

  for (int i = 0; i <n ; i ++)
  {
      mx =-1999;
      mx=max(mx,arr[i]);
      
  }
  cout<<mx<<endl;
}