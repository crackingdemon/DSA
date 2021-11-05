#include <iostream>;
using namespace std;


int main(){


class student {
    string name;

    public:

    int age;
    bool gender;

    student(){
        cout<<"default constructor example"<<endl;
    };//need to write if a constructor is created 

    student ( string s , int a , int g ){
        cout<<"parameterised constructor"<<endl;
        name = s ;
        age = a ;
        gender = g; 

    };
//destructor
~student(){
    cout<<"destructor is called"<<endl;
};




    student(student &a){
        name = a.name;
        age=a.age;
        gender=a.gender;
    }//copy constructor

    void setName(string s ){
        name = s;
    }
    void getName(){
        cout<<name<<endl;
    };

    //operator overloading 

    bool operator == (student &a){
        if (name == a.name && age == a.age && gender == a.gender){
            return true; 

        }
        return false ; 
    }

};

student a("urvi", 20 , 1 );
student b = a;

    return 0;
}