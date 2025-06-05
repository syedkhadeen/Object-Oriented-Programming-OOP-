#include<iostream>
using namespace std;
class TComplex{
    float real,img;
        public:
            TComplex(){real=0,img=0;}
            TComplex(float r,float i):real(r),img(i){}
            TComplex operator + (TComplex&);
};
TComplex TComplex::operator + (TComplex& z){
    TComplex result;
    result.real=real+z.real;
    result.img=img+z.img;
    return result;
} 
int main(){
    TComplex z1(3.2,5.5);
    TComplex z2(1.5,7.0),z3;
    z3=z1+z2;
}
