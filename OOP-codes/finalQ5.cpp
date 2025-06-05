#include<iostream>
using namespace std;
class Super{
    private:
        int x;
    public:
        void print(){           //this is static linkage
            cout<<"In SuperClass x= "<<x<<endl;
        }          
        Super(int u=0){             //this is static linkage because we havent use virtual function and it is compile time polymorphim 
            x=u;                    //as the compiler will only execute the print function of super class as it decided which function to call on
        }                          //compile time
};
class Sub:public Super{
    private:
        int a;
    public:
        void print(){
            cout<<"In Sub *** : ";
            Super::print();
            cout<<"In Subclass a = "<<a<<endl;
        }
        Sub(int u=0,int v=0):Super(u){
            a=v;
        }
};
void callPrint(Super &p){
    p.print();
}
int main(){
    Super one(5);
    Sub two(3,15);
    one.print();
    two.print();
    cout<<"*** Calling the function callPrint ***"<<endl;
    callPrint(one);
    callPrint(two);
}