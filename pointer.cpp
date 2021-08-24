#include<iostream>
using namespace std;
int main() {

int a = 20 ;
int* aptr = &a ;
cout<< *aptr << endl;
*aptr = 30 ;
cout<< a << endl;


return 0;
}