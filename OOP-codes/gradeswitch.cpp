#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade : (in Capital letters)";
    cin>>grade;
    switch(grade){
        case 'A':
        cout<<"Excellent"<<endl;
        break;
        case 'B':
        cout<<"Very Good"<<endl;
        break;
        case 'C':
        cout<<"Good"<<endl;
        break;
        case 'D':
        cout<<"Poor"<<endl;
        break;
        case 'F':
        cout<<"Fail"<<endl;
        break;
        default:
        cout<<"Incorrect Grade"<<endl;
        break;
    }
}