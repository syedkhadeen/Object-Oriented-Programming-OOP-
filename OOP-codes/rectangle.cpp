#include<iostream>
using namespace std;
class Rectangle{
    private:
        float length;
        float width;
    public:
        Rectangle(float length=0.0,float width=0.0){
            this->length=length;
            this->width=width;
        }
        void setLength(float length){
            this->length=length;
        }
        void setWidth(float width){
            this->width=width;
        }
        float getLength()const{
            return length;
        }
        float getWidth()const{
            return width;
        }
        float perimeter(){
            float per=2*(length+width);
            return per;
        }
        float area(){
            float a=length*width;
            return a;
        }
       static int sameArea(Rectangle r1,Rectangle r2){
            if(r1.area()==r2.area()){
                return 1;
            }
            else{
                return 0;
            }
        }
};
int main(){
    Rectangle a(5,2.5);
    Rectangle b(5,18.9);
    cout<<"The Perimeter of Rectangle a is : "<<a.perimeter()<<endl;
    cout<<"The Area of Rectangle a is : "<<a.area()<<endl;
    cout<<"The Perimeter of Rectangle b is : "<<b.perimeter()<<endl;
    cout<<"The Area of Rectangle b is : "<<b.area()<<endl;
    if(Rectangle::sameArea(a,b)){
        cout<<"Rectangle a and b have the same area."<<endl;
    }
    else{
         cout<<"Rectangle a and b donot have the same area."<<endl;  
    }
}