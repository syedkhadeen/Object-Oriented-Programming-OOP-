#include<iostream>
using namespace std;
class Complex{
    private:
        float real;
        float imaginary;
    public:
        Complex(float real=0.0,float imaginary=0.0){
            this->real=real;
            this->imaginary=imaginary;
        }
        void set(float real,float imaginary){
            this->real=real;
            this->imaginary=imaginary;
        }
        float getRealNumber()const{
            return real;
        }
        float getImaginaryNumber()const{
            return imaginary;
        }
        void display(){
            cout<<real<<"+"<<imaginary<<"i"<<endl;
        }
        Complex sum(Complex x){
            Complex temp;
            temp.real=real+x.real;
            temp.imaginary=imaginary+x.imaginary;
            return temp;
        }
};
int main(){
    Complex a,b,c;
    a.set(5.5,3.0);
    b.set(1.9,9.8);
    cout<<"Complex number for object a is : ";
    a.display();
    cout<<"Complex number for object b is : ";
    b.display();
    c=a.sum(c);
    cout<<"Sum of Complex Numbers are : ";
    c.display();
}