#include <iostream>
#include <stdio.h>
#include <string>
#include <cstring>
using namespace std;

struct HNB
{
    int id ;
   string name ; 
   string hobby;
};

int main(){
    struct HNB sourav, arpit, rishank ;
sourav.id = 1;
sourav.name ="raj";
sourav.hobby ="game";
cout<<sourav.id;
cout<<sourav.name;
cout<<sourav.hobby;

    return 0 ;

}