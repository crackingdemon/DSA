#include <iostream>
using namespace std;

void primeNewMethod(int n ) {
    int prime[100]={0};
    for (int i=2;i<=n;i++){
        if (prime[i]==0){
            for (int j= i*i ; i<n;j=+i){
                prime[i]==1;
            }
        }
    }
    for (int i=2;i<n;i++){
        if (prime[i]== 0){
            cout<<i<<" ";
        }
    }cout<<endl;
}

int main (){
int n ;
cin>>n;

primeNewMethod(n);
    return 0;

}