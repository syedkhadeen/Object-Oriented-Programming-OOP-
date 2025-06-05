#include<iostream>
using namespace std;
int main(){
    char grade;
    cout<<"Enter your grade : (in Capital letters)";
    cin>>grade;
    if(grade=='A'){
        cout<<"Excellent"<<endl;
    }
    else if(grade=='B'){
        cout<<"Very Good"<<endl;
    }
    else if(grade=='C'){
        cout<<"Good"<<endl;
    }
    else if(grade=='D'){
        cout<<"Poor"<<endl;
    }
    else if(grade=='F'){
        cout<<"Fail"<<endl;
    }
    else{
        cout<<"Incorrect Grade!"<<endl;
    }
}