#include<iostream>
using namespace std;
int main(){
int a,reverse=0,remainder;
cout<<"Enter a three digit number : "<<endl;
cin>>a;
if(a>999){
    cout<<"Enter a three digit number."<<endl;
    return 1;
}
while(a!=0){
    remainder=a%10;
    reverse=reverse*10+remainder;
    a/=10;
  }
cout<<"The number "<<a<<" in reverse order is : "<<reverse<<endl;
}