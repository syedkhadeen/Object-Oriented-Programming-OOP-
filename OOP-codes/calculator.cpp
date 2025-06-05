#include<iostream>
using namespace std;
int main(){
int a,b;
char choice,ask,operations;
do{
cout<<"Enter the first number : "<<endl;
cin>>a;
cout<<"Enter the second number : "<<endl;
cin>>b;
cout<<"Choose any of the basic arithmetic operations you want (+),(-),(*),(/) : "<<endl;
cin>>operations;
switch(operations){
    case '+':
    cout<<"The sum of "<<a<<" and "<<b<<" is : "<<a+b<<endl;
    break;

    case '-':
    cout<<"The difference of "<<a<<" and "<<b<<" is : "<<a-b<<endl;
    break;

    case '*':
    cout<<"The product of "<<a<<" and "<<b<<" is : "<<a*b<<endl;
    break;

    case '/':
    cout<<"The division of "<<a<<" and "<<b<<" is : "<<a/b<<endl;
    break;
}
cout<<"Press 'Y' to perform fuctions.\nPress 'N' to close the calculator."<<endl;
cin>>ask;
}while(ask!='N');
}