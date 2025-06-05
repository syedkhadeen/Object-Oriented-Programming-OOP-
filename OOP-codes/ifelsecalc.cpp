#include<iostream>
using namespace std;
int main(){
int a,b;
char operations;
cout<<"Enter the first number : "<<endl;
cin>>a;
cout<<"Enter the second number : "<<endl;
cin>>b;
cout<<"Enter the operation : "<<endl;
cin>>operations;
if(operations=='+'){
    cout<<a<<"+"<<b<<"="<<a+b;
}
else if(operations=='-'){
    cout<<a<<"-"<<b<<"="<<a-b;
}
else if(operations=='*'){
    cout<<a<<"*"<<b<<"="<<a*b;
}
else if(operations=='/'){
    cout<<a<<"/"<<b<<"="<<a/b;
}


}