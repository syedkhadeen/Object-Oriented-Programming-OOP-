#include<iostream>
using namespace std;
/*
class Distance{
    private:
        int meter;
        friend int addFive(Distance);
        public:
            Distance() : meter(0){};
}; 
int addFive(Distance d){
    d.meter+=5;
    return d.meter;
}
int main(){
    Distance d;
    cout<<"The value of meter with friend function is : "<<addFive(d)<<endl;
}

class Distance;
class Add{
    public:
        int addFive(Distance d);
};
class Distance{
    private:
        int meter;
    public:
        int getDistance(){
            return meter;
        }
        Distance(int meter){
            this->meter=meter;
        }
        friend int Add::addFive(Distance d);
};
int Add::addFive(Distance d){
    d.meter+=5;
    return d.meter;
}
int main(){
    Distance d(5);
    cout<<"Distance before : "<<d.getDistance()<<endl;
    Add a;
    cout<<"Distance now : "<<a.addFive(d);
}

#include <iostream>
using namespace std;
// forward declaration
class ClassB;
class ClassA {
private:
int numA;
public:
ClassA(int numA)
{
this->;numA=numA;
}
// friend function declaration
friend int add(ClassA, ClassB);

};
class ClassB {
private:
int numB;
public:
ClassB(int numB)
{
this->;numB=numb;
}
// friend function declaration
friend int add(ClassA, ClassB);

};
// access members of both classes
int add(ClassA objectA, ClassB objectB) {
return (objectA.numA + objectB.numB);
}
int main() {
ClassA objectA(4);
ClassB objectB(6);
cout &lt;&lt; &quot;Sum: &quot; &lt;&lt; add(objectA, objectB);
return 0;
}
class Complex{
    private:
        int real;
        int imag;
    public:
    Complex(int r, int i):real(r),imag(i){}
    friend Complex addComplex(Complex c1, Complex c2);
    void display(){
        cout<<real<<"+"<<imag<<"i"<<endl;
    }
};
Complex addComplex(Complex c1,Complex c2){
    Complex result(c1.real+c2.real,c1.imag+c2.imag);
    return result;
}

int main(){
    Complex num1(3,4);
    Complex num2(1,-2);
    Complex sum=addComplex(num1,num2);
    cout<<"Sum: ";
    sum.display();
}       
/*

class Complex {
    private:
        int real;
        int imag;

    public:
        Complex(int r,int i):real(r),imag(i){}
        void display() {
        cout<<real<<"+"<<imag<<"i"<<endl;
        }
    int getReal(){
        return real;
    }
    int getImag(){
        return imag;
    }
};
class Operations{
public:
    Complex addComplex(Complex c1,Complex c2){
        int realSum=c1.getReal()+c2.getReal();
        int imagSum=c1.getImag()+c2.getImag();
        return Complex(realSum,imagSum);
    }
    Complex subtractComplex(Complex c1,Complex c2){
        int realDiff=c1.getReal()-c2.getReal();
        int imagDiff=c1.getImag()-c2.getImag();
        return Complex(realDiff,imagDiff);
    }
};
int main(){
    Complex num1(3,4);
    Complex num2(1,-2);
    Complex sum=Operations::addComplex(num1, num2);
    Complex difference=Operations::subtractComplex(num1, num2);
    cout<<"Sum: ";
    sum.display();
    cout<<"Difference: ";
    difference.display();
}
class A{
    public:
        int x;
        int y;
        void fun(){cout<<x<<" "<<this->x<<" "<<this->y<<endl;}
};
int main(){
    A obj1;
    obj1.x=3;
    obj1.y=5;
    obj1.fun();
}

class A{
    int x;
    public:
    A(){x=5;}
    A fun(){x+=3; return *this;}   //returns object
    void print(){cout<<x<<endl;}
};
int main(){
    A obj1,obj2;
    obj1=obj2.fun();
    obj1.print();
    obj2.print();
}
class A{
    friend void func1();
    int x;
};
class B:public A{
    friend void fun2();
    int y;
};
void func1(){
    B obj;
    obj.x=1;
    //obj.y=2;    cannot access,not a friend of B
}
void func2(){
    B obj;
    //obj.x=1;    cannot access,not a friend of A
    obj.y=2;
}

class Employee{
    private:
        string name;
        double salary;
    public:
        Employee();
        Employee(string n,double s);
        string getName();
        double getSalary();
        friend void raiseSalary(double amount,Employee &e); //Friend function can be accessed outside

};
Employee::Employee() : name(""),salary(0){}
Employee::Employee(string n,double s):name(n),salary(s){}
string Employee::getName(){return name;}
double Employee::getSalary(){return salary;}

void raiseSalary(double amount,Employee &e){
    e.salary+=amount;
}

class Employee{
    private:
        string name;
        double salary;
    public:
        Employee();
        Employee(string n,double s);
        string getName();
        double getSalary();
        friend class Boss;  //if you dont write this we cant access salary data member

};
Employee::Employee() : name(""),salary(0){}
Employee::Employee(string n,double s):name(n),salary(s){}
string Employee::getName(){return name;}
double Employee::getSalary(){return salary;}

class Boss{
    public:
        Boss();
        void giveRaise(double amount,Employee& e);
};
Boss::Boss(){}
void Boss::giveRaise(double amount,Employee &e){
    e.salary+=amount;   //can access private and protected data members
}
*/


