#include <iostream>
using namespace std;
/*
int fun(int a,int b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
double fun(double a,double b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
string fun(string a,string b){
    if(a>b){
        return a;
    }
    else{
        return b;
    }
}
int main(){
    cout<<fun(8,5)<<endl;
    cout<<fun("Ali","Ahmed")<<endl;
    cout<<fun(3.4,5.5)<<endl;
}

//Function Template//

template<class T>
T fun(T a,T b){
    if(a>b)
        return a;
    else    
        return b;
}
int main(){
    cout<<fun(8,5)<<endl;
    cout<<fun("Ali","Ahmed")<<endl;
    cout<<fun(3.4,5.5)<<endl;
}

template<class A>
A larger(A x,A y){
    if(x>y){
        return x;
    }
    else{
        return y;
    }
}
int main(){
    int a=2,b=4;
    char ch1='A',ch2='B';
    string s1="Hi",s2="Hello";
    double var1=3.3,var2=4;
    cout<<"The larger elements between the following : \n";
    cout<<a<<"  "<<b<<"  is : "<<larger(a,b)<<endl;
    cout<<ch1<<"    "<<ch2<<"   is : "<<larger(ch1,ch2)<<endl;
    cout<<s1<<"     "<<s2<<"    is : "<<larger(s1,s2)<<endl;
    cout<<var1<<"   "<<var2<<"     is : "<<larger(var1,var2)<<endl;
}


//Class Template//
template<class T>
class A{
    T x;
    T y;
    public:
        void set(T a,T b){x=a;y=b;}
        void print(){cout<<x<<" "<<y<<endl;}
        T getX();
};
template<class T>
T A <T> ::getX(){
    return x;
}
int main(){
    A<int> obj;
    obj.set(3,5);
    obj.print();
    cout<<"x is : "<<obj.getX()<<endl;

    A<char>obj2;
    obj2.set('W','R');
    obj2.print();
    cout<<"x is : "<<obj.getX()<<endl;
}

template<typename T>
bool  isEqualTo(T a,T b){
    bool ans=(a==b);
    if(ans==true){
        return true;
    }
    else    
        false;
}
int main(){
    cout<<isEqualTo(5,6)<<endl;
    cout<<isEqualTo(9.9,9.9)<<endl;
}
class Rectangle{
    int length,width;
        public:
            Rectangle(int l=0,int w=0){}
            void set(int length,int width){
                this->length=length;
                this->width=width;
            }
            friend int area(Rectangle a);
            void display(){
                cout<<"The Area of rectangle is : "<<area(*this);
            }
};
int area(Rectangle a){
    return a.length * a.width;
}
int main(){
    Rectangle a;
    Rectangle b;
    a.set(6,8);
    b=a;
    b.display(); 
}
*/
template <class T>
class A{
    T x;
    T y;
        public:
            void set(T a,T b){x=a;y=b;}
            void print(){cout<<x<<" "<<y<<endl;}
            T getX(){return x;}
};
//template <class T>
//T A<T>::getX(){return x;}
int main(){
    A<int> obj;
    obj.set(3,5);
    obj.print();
    cout<<"x is : "<<obj.getX()<<endl;

    A<char> obj2;
    obj2.set('W','R');
    obj2.print();
    cout<<"x is : "<<obj2.getX()<<endl;
}
