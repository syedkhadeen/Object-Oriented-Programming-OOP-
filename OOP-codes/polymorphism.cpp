#include<iostream>
using namespace std;
/*
class DemoClass{
    public:
        int add(int a,int b){
            return a+b;
        }
        int add(int x,int y,int z){
            return x+y+z;
        }
        int add(double pi,int x){
            return (int)pi+x;
        }
};
int main(){
    DemoClass d;
    cout<<d.add(3,7)<<endl;
    cout<<d.add(1,9,8)<<endl;
    cout<<d.add(3.14,5)<<endl;
}
class baseClass{
    public:
        void print();
        baseClass(int u=0);
    private:
        int x;
};
class derivedClass:public baseClass{
    public:
        void print();
        derivedClass(int u=0,int v=0);
    private:
        int a;
};
void baseClass::print(){
    cout<<"In baseclass x= "<<x<<endl;
}
baseClass::baseClass(int u){
    x=u;
}
void derivedClass::print(){
    cout<<"In derivedClass *** : ";
    baseClass::print();
    cout<<"In derived class a = "<<a<<endl;
}
derivedClass::derivedClass(int u,int v):baseClass(u){
    a=v;
}
void callPrint(baseClass &p){
    p.print();
}
int main(){
    baseClass one(5);
    derivedClass two(3,15);
    one.print();
    two.print();

    cout<<"*** Calling the function callPrint ***"<<endl;

    callPrint(one);
    callPrint(two);

}

class Demo{     //static and dynamic linkage, polymorphism 
    int a,b;
    public:
        void display(){
            cout<<"a = ";
            cin>>a;
            cout<<"b =";
            cin>>b;
        }
};
int main(){
    Demo obj;
    obj.display();

    //pointer obj
    Demo *obj1;
    obj1=&obj;
    obj1->display();
}
class shape{
    public:
        virtual void draw(){                //if we dont use virtual function of shape will be called it is called static linkage
            cout<<"drawing the shape : "<<endl;
        }
};
class rectangle: public shape{
    int length,width;
    public:
        void draw(){
            cout<<"Drawing rectangle : "<<endl;
        }
};
class circle: public shape{
    int radius;
    public:
        void draw(){
            cout<<"Drawing circle : "<<endl;
        }
};
int main(){
    shape *s=new circle();  //static linkage
    s->draw();
    s=new rectangle();
    s->draw();
    delete s;
}

class shape{
    public:                       //if class doesnot have any data members and has pure virtual function is abstract class.
        virtual void draw()=0;   //pure virtual function
};
class rectangle:public shape{
    int length,width;
        public:
            void draw(){
                cout<<"we are drawing rectangle"<<endl;
            }
};
class circle : public shape{
    int radius;
        public:
            void draw(){
                cout<<"we are drawing circle"<<endl;
            }
};
void drawAll(shape *s[]){       //pointer array of the base class
    cout<<"Drawing rectangle and circle in main"<<endl;
    for(int i=0;i<2;i++){
        s[i]->draw();
    }
}
int main(){
    shape *s[2];
    s[0]=new rectangle;
    s[1]=new circle;

    cout<<"Drawing rectangle and circle in main"<<endl;
    for(int i=0;i<2;i++){
        s[i]->draw();
    }
    drawAll(s);
}


class Parent{
    public:
        virtual ~Parent(){
            cout<<"parent destructor executed"<<endl;
        }
};
class child : public Parent{
    public:
        ~child(){
            cout<<"child destructor executed"<<endl;
        }
};
int main(){
    Parent*p=new child();
    delete p;
}
class Pet{
    protected:
        string Name;
    public: 
        Pet(string n){Name=n;}
        void Run(){cout<<Name<<" : i am running"<<endl;}
};
class Dog:public Pet{
    public:
        Dog(string n):Pet(n){};
        void MakeSound(){cout<<Name<<" : Woof Woof"<<endl;}
};
class Cat:public Pet{
    public:
        Cat(string n):Pet(n){};
        void MakeSound(){cout<<Name<<" : meow meow"<<endl;}
};
int main(){
    Pet aPet("Pet");
    Cat aCat("Tom");
    Dog aDog("Spike");
    aPet.Run();
    aDog.Run();
    aCat.Run();
    aDog.MakeSound();
    aCat.MakeSound();
}
class A{
    public:
        void fun1(){cout<<"Fun1 of class A"<<endl;}
        virtual void fun2(){cout<<"Fun2 of class A"<<endl;}
        void fun3(){cout<<"Fun3 of class A"<<endl;}
       virtual ~A(){cout<<"Destructor of A"<<endl;}

};
class B:public A{
    public:
        virtual void fun1(){cout<<"Fun1 of class B"<<endl;}
        void fun2(){cout<<"Fun2 of class B"<<endl;}
        void fun3(){cout<<"Fun3 of class B"<<endl;}
        ~B(){cout<<"Destructor of B"<<endl;}
};
class C:public B{
    public:
        void fun1(){cout<<"Fun1 of class C"<<endl;}
        void fun2(){cout<<"Fun2 of class C"<<endl;}
        virtual void fun3(){cout<<"Fun3 of C"<<endl;}
        ~C(){cout<<"Destructor of C"<<endl;}
};
void OutFun(B &objParameter){
    objParameter.fun1();
    objParameter.fun2();
    objParameter.fun3();
}
int main(){
    C objC;
    OutFun(objC);
    B *p=new C;
    delete p;
}
*/
class A{
    public:
        void fun1(){cout<<"Fun1 of class A"<<endl;}
        virtual void fun2(){cout<<"Fun 2 of class A"<<endl;}
        virtual ~A(){cout<<"Destructor of A"<<endl;}
};
class B : public A{
    private:
        int *arr;
    public:
        B(int sz){
            arr=new int[sz];
        }
        void fun1(){
            cout << "Fun1 of Class B" << endl;
        }
        void fun2(){
            cout<<"Fun 2 of class B"<<endl;
        }
        ~B(){
            cout<<"Destructor Of B"<<endl;
            delete arr;
        }
};
int main(){
    A*p;
    p=new B(5);
    p->fun1();
    p->fun2();
    delete p;
}

