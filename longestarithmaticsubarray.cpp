#include <iostream>
#include <cmath>
using namespace std;
int main() {
  int n ;
  cin>>n;
  int arr[n];
  for (int i=0;i<n;i++){
    cin>>arr[i];
  }
int cd = arr[1]-arr[0];
int ans = 2;
int curr = 2;
int j = 2;
while (j<n){
  if(cd == arr[j]-arr[j-1]){
    curr++;
  }else {
    cd = arr[j]-arr[j-1];
    curr=2;
  }
ans=max(curr,ans);
j++;
}
 cout<<ans<<endl;
 return 0;
}