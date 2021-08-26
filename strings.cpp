#include<iostream>
#include<string>
#include<algorithm>//to use sort function
using namespace std;
int main(){
string str:
cin>>str;
string str1(6,'n');
cout<<str;
cout<<str1;
string str2 = "SouravRaj";
cout<<str2;
//for getting line wise input from
string str3;
getline(cin,str3); //cannot use cin , it will not input words after "space "
cout<<str3;
//Functions of strings 
//1 - append string 
string s1="cracking";
string s2="Demon";
s1.append(s2);
cout<<s1<<endl; // or s1=s1+s2

//cout particular characters 
cout<<s1[1]<<endl;

//clear function
string abc="gadhjasbsakdj";
abc.clear();
cout<<abc<<endl;

//compare two strings 
string s5 ="abc";
string s6 ="xyz"; 
cout<<s6.compare(s5)<<endl;
//check empty string 
string s7="abc";
s7.clear();
if(s7.empty()) 
cout<<"string is empty"<<endl;
//finding the
cout<<s7.find("c");
//inserting the
s7.insert(2,"s");
//find lenght of string and
cout<<s7.length()<<endl;
//to get subarray 
string s8= s7.substr(0,2);
cout<<s8<<endl;
//string to integer 
string s9="6969";
int x =stoi(29);

//integer to string 
to_string()
    return 0;
}