#include<iostream>
using namespace std;
int main(){

int savings;
cin>>savings;

if(savings>6000){
  if(savings>8000){
    cout<<"kedarnath";
  }else{
    cout<<"tungnath chopta";
  }
}
else if(savings>5000){
  cout<<"with hemwanti";
}
else if(savings>4000){
  cout<<"with mishra";
}
else{
  cout<<" with sourav , balodi , dvendra, rishank";
}
    return 0;
}