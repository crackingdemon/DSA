#include <iostream>

using namespace std;

int DTO(int n){
    
    int sum = 0;
    int r , i =1;
    while(n!=0){
        r=n%8;
        n/=8;
        sum+=r*i;
        i*=10;
    }
 return sum;   
}

int main()
{
    int n ;
    cin>>n;
    cout<<DTO(n);

    return 0;
}
