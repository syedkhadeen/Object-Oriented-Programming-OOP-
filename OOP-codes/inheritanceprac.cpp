#include<iostream>
using namespace std;
/*class Super{
    protected:
        int storage;
    public:
        void put(int val){storage=val;}
        int get(){return storage;}  
};
class Sub:public Super{
    public:
        void print(){cout<<"Storage : "<<storage<<endl;}
};
int main(){
    Sub obj;
    obj.put(100);
    obj.put(obj.get()+1);
    obj.print();
}

class A{
    int x;
    int y;
    public:
        int z;
        void printA(){cout<<x<<" "<<y<<" "<<z<<" "<<endl;}
        void setA(int a,int b,int c){x=a;y=b;z=c;}
};
class B: public A{
    int var1;
    public:
        int var2;
        void setB(int a,int b){var1=a;var2=b;}
        void printB(){cout<<var1<<" "<<var2<<endl;}
};
int main(){
   // A objA;
    B objB;
    objB.setA(3,4,5);
    objB.setB(7,8);
    objB.printA();
    objB.printB();
}

class A{
    int x;
    int y;
        public:
            int z;
            void setA(int a,int b,int c){x=a;y=b;z=c;}
            void print(){cout<<x<<" "<<y<<" "<<z<<endl;}
};
class B : public A{
    int var1;
        public:
            int var2;
            void setB(int a,int b){var1=a;var2=b;}
            void print(){cout<<var1<<" "<<var2<<endl; A::print();}
};
int main(){
    B objB;
    objB.setB(7,8);
    objB.setA(1,2,3);
    objB.print();
    objB.A::print();
}

class A{
    private:
        int y;
    public: 
        int x;
        void print(){cout<<x<<" "<<y<<endl;}
        A(){x=10;y=20;}
};
class B: public A{
    public:
        int z;
        void print(){A::print();cout<<z<<endl;}
        B(){z=100;}
};
int main(){
    B objB;
    objB.print();
}
class A{
    public:
        A(){cout<<"A's constructor called"<<endl;}
};
class B{
    public:
        B(){cout<<"B's constructor called"<<endl;}
};
class C:public B,public A{
    public:
        C(){cout<<"C's constructor called"<<endl;}
};
int main(){
    C c;
}

class SuperA{
    protected:
        int storage;
    public:
        void put(int val){storage=val;}
        int get(){return storage;}
};
class SuperB{
    protected:
        int safe;
    public:
        void insert(int val){safe=val;}
        int takeout(){return safe;}
};
class Sub:public SuperA,public SuperB{
    public: 
        void print(){
            cout<<"storage = "<<storage<<endl;
            cout<<"safe = "<<safe<<endl;
        }
};
int main(){
    Sub object;
    object.put(1);
    object.insert(2);
    object.put(object.get()+object.takeout());
    object.insert(object.get()+object.takeout());
    object.print();
}

class SuperA{
    protected:
        int storage;
    public:
        void put(int val){storage=val;}
        int get(){return storage;}
};
class SuperB{
    protected:
        int safe;
    public:
        void put(int val){safe=val;}
        int get(){return safe;}
};
class Sub:public SuperA,public SuperB{
    public: 
        void print(){
            cout<<"storage = "<<storage<<endl;
            cout<<"safe = "<<safe<<endl;
        }
};
int main(){
   Sub s;
   s.SuperA::put(5);
   cout<<s.SuperA::get()<<endl;
}

class Person{//DIAMOND PROBLEM
    public:
        Person(int x){cout<<"Person::Person(int ) called"<<endl;} 
};
class Faculty:public Person{
    public:
        Faculty(int x):Person(x){
            cout<<"Faculty::Faculty(int ) called"<<endl;
        }
};
class Student:public Person{
    public:
        Student(int x):Person(x){
            cout<<"Student::Student(int ) called"<<endl;
        }
};
class TA : public Faculty,public Student{
    public:
        TA(int x):Student(x),Faculty(x){
            cout<<"TA::TA(int ) called"<<endl;
        }
};
int main(){
    TA ta1(30);
}

class Person{
    public:
        Person(int x){cout<<"Person::Person(int ) called"<<endl;}
        Person(){cout<<"Person::Person() called"<<endl;}
};
class Faculty:virtual public Person{
    public:
    Faculty(int x):Person(x){
        cout<<"Faculty::Faculty(int ) called"<<endl;
    }
};
class Student:virtual public Person{
    public:
        Student(int x):Person(x){
            cout<<"Student::Student(int ) called"<<endl;
        }
};
class TA: public Faculty,public Student{
    public:
        TA(int x):Student(x),Faculty(x),Person(x){
            cout<<"TA::TA(int ) called"<<endl;
        }
};
int main(){
    TA ta1(30);
}
*/
class A{
    int x;
    int y;
        public:
            int z;
            void setA(int a,int b,int c){x=a;y=b;z=c;}
           virtual void print(){cout<<x<<" "<<y<<" "<<z<<endl;}
};
class B : public A{
    int var1;
        public:
            int var2;
            void setB(int a,int b){var1=a;var2=b;}
            void print(){cout<<var1<<" "<<var2<<endl; }
};
int main(){
    B objB;
    objB.setB(7,8);
    objB.setA(1,2,3);
    objB.print();
   // objB.A::print();

}
