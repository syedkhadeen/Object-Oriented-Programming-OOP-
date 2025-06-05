#include<iostream>
using namespace std;
class Rectangle{
    private:
        double length,width;
    public:
        Rectangle(){
            this->length=length;
            this->width=width;
        }
        void setLength(double length){
            this->length=length;
        }
        void setWidth(double width){
            this->width=width;
        }
        double getLength()const{
            return length;
        }
        double getWidth()const{
            return width;
        }
        double calArea(){
            return length*width;
        }
        double calPerimter(){
            return 2*(length+width);
        }
};
int main(){
    Rectangle rectangle;
    rectangle.setLength(10);
    rectangle.setWidth(5);
    double area=rectangle.calArea();
    cout<<"Area is : "<<area<<endl;
    double perimter=rectangle.calPerimter();
    cout<<"Perimter is : "<<perimter<<endl;
}