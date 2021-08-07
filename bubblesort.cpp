#include <iostream>
using namespace std;
int main(){

int n;
cin>>n;
int arr[n];
for (int i=0; i<n; i++){
    cin>>arr[i];
}

int c =1;
while(c<n){
    for (int i=0; i<n-c; i++){
        if(arr[i]>arr[i+1]){
            int t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = t;
        }
    }c++; 
}
for(int i = 0;i<n;i++){
    cout<<arr[i]<<" ";
}

    return 0; //
}