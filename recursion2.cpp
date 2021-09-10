#include <iostream>
using namespace std;

int fibna (int n ){

    if (n<2){
        return 1;
    }
    return fibna(n-1) + fibna (n-2);
}
 
int main (){

int n ;
cin>>n;


cout<<fibna(n)<<endl;

    return 0;
}