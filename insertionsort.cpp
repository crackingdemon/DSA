#include <iostream>
using namespace std;
int main() {
  int arr[]={7,8,6,2,4,1};
  int size=6;
  int min;
  int temp;
  for (int i=1;i<size;i++)
  {
  int min=arr[i];
  int j=i-1;
  while(arr[j]>min && j<=0){
    arr[j+1]=arr[j];
    j--;
  }
  arr[j+1]=min;
  }
  for(int i = 0;i<size;i++){
    cout<<arr[i];
  }
 
  return 0;
}