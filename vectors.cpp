#include <iostream>
#include<vector>
using namespace std;

int main(){

vector<int> v;
v.push_back(1);
v.push_back(2);
for(int i =0;i<v.size();  i++){
cout<<v[i]<<endl;


vector<int>::iterator it;
for (it=v.begin();it!=v.end();it++){
    cout<<*it<<endl;
}
for (auto element:v){
    cout<<element<<endl;
}

v.pop_back();
vector<int> v2(3,50);
//50 50 50 

//swap 

swap(v,v2);
//changes the value of vector 


sort(v.begin(),v.end());
 
    return 0;
}


