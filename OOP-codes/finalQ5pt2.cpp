#include<iostream>
using namespace std;
class Super{
    private:
        int x;
    public:
        virtual void print(){           //this is dynamic linkage
            cout<<"In SuperClass x= "<<x<<endl;
        }          
        Super(int u=0){            //this is dynamic linkage because we have use virtual function and it is run time polymorphim 
            x=u;                   //as the compiler will now print function of super and sub class and it will be decided on run time.
        }
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