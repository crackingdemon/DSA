#include <iostream>
using namespace std;
int main() {
  int arr[]={7,8,2,6,4,1};
  int size=6;
  int min;
  int temp;
  for (int i=0;i<size-1;i++)
  {
      min=i;
      for(int j=i+1;j<size;j++)
      {
        if(arr[min]>arr[j])
        min=j;
      }
       temp=arr[min];
      arr[min]=arr[i];
      arr[i]=temp;
  }
  for(int i =0;i<size;i++){
    cout<<arr[i];
  }
   
 
  return 0;
}