#include<iostream>
using namespace std;
/*
class Rectangle{
    private:
        float length,breadth;
    public:
        Rectangle(){length=0.0;breadth=0.0;}
        Rectangle(float length,float breadth){this->length=length;this->breadth=breadth;}
        Rectangle(float num):length(num),breadth(num){}
    
        float area(){
            return length*breadth;
        }
        void show(){
            cout<<"The length of rectangle is : "<<length<<endl;
            cout<<"The breadth of rectangle is : "<<breadth<<endl;
        }
        int sameArea(Rectangle other){
               if(length*breadth==other.length*other.breadth){
                return 1;
               } 
               else{
                return 0;
               }
        }
        ~Rectangle(){
            cout<<"Desctructor called"<<endl;
        }
};
int main(){
        Rectangle a(5,2.5);
        Rectangle b(5,18.9);
        a.show();
        b.show();
        if(a.sameArea(b)){
            cout<<"same area"<<endl;
        }
        else{
            cout<<"diff area"<<endl;
        }
}
*/
class timeType{
    private:
        int hours,minutes,seconds;
    public:
        timeType():hours(0),minutes(0),seconds(0){}
        timeType(int hours,int minutes,int seconds){
            this->hours=hours;
            this->minutes=minutes;
            this->seconds=seconds;
        }
        void display(){
            cout<<hours<<":"<<minutes<<":"<<seconds<<endl;
        }
        void addTime(timeType &t1,timeType &t2){
            seconds=t1.seconds+t2.seconds;
            minutes=t1.minutes+t2.minutes+seconds/60;
            hours=t1.hours+t2.hours+minutes/60;
            seconds%=60;
            minutes%=60;
            hours%=24;
        }
};
int main(){
    timeType time1(10,30,45);
    timeType time2(4,15,20);
    timeType time3;
    time3.addTime(time1,time2);
    cout<<"Time 1 : ";
    time1.display();
    cout<<"Time 2 : ";
    time2.display();
    cout<<"Time 3 : ";
    time3.display();
}