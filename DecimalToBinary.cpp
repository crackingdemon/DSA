#include <iostream>

using namespace std;

int DTB(int n){
    
    int sum = 0;
    int r , i =1;
    while(n!=0){
        r=n%2;
        n/=2;
        sum+=r*i;
        i*=10;
    }
 return sum;   
}

int main()
{
    int n ;
    cin>>n;
    cout<<DTB(n);

    return 0;
}
