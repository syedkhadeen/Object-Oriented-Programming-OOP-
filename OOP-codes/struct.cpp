#include<iostream>
using namespace std;
struct Student{
    int rollNo;
    string name;
    char section;
};
Student ali;

int main(){
    
cin>>ali.rollNo;
cin.ignore(); 
getline(cin,ali.name);
cin>>ali.section;
cout<<"Roll No : "<<ali.rollNo<<endl;
cout<<"Name : "<<ali.name<<endl;
cout<<"Section : "<<ali.section<<endl;
}