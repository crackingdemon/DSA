#include <iostream>
using namespace std;

int isPalin(int n , int res){
if (n==0) return res;

res = res *10 + n % 10 ;

return isPalin(n/10,res);

}


int main(){

int n ;
cin>>n;


int num = n;
int res = isPalin(num, 0);

    if (num == res){
        cout<<"yes";
    }
    else {
        cout<<"no";
    };



    return 0;
}