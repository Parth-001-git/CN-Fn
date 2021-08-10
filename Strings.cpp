#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s0;
    string s1("hello");
    string s2 ="hello world";
    string s3(s2);

    string s4=s3;

    char a[]={'a','b','c','\0'};
    string s5(a);

    //cout<<s0<<endl;
    cout<<s1<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;
    cout<<s4<<endl;
    cout<<s5<<endl;
    /*if (s0.empty()){
        cout<<"s0 is an empty string ";
    } */

//append

s0.append("hello777");
cout<<s0<<endl;

//Remove

cout<<s0.length()<<endl;
s0.clear();
cout<<s0.length()<<endl;

//compare two strings
s0 ="Apple";
s1 ="Orange";
cout<<s0.compare(s1)<<endl;

//overload operators
if(s1 > s0){
    cout<<"mango is lexi greater than apple"<<endl;

}

cout<<s1[0]<<endl;

// Find substring

 s0="I want to have apple juice";
int idx=s0.find("apple");
cout<<idx<<endl;


//Remove a  word form a string
string word = "apple";
int len = word.length();
cout<<s0<<endl;
s0.erase(idx,len);
cout<<s0<<endl;


//iteration over all the characters in the string
for(int i=0;i<s1.length();i++){
    cout<<s1[i]<<":";
}  
cout<<endl;
 //Iterators
 for(auto it =s1.begin();it !=s1.end();it++){
     cout<<(*it)<<",";
 }
 cout<<endl;
 //For each loop
 for (char t:s1){
     cout<<t<<".";
 }

}