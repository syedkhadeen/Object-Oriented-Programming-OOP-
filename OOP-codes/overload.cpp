#include<iostream>
using namespace std;
class Student{
    private:
        int rollNo;
        string name;
        char sec;
    public:
        Student(){
            this->rollNo=0;
            this->name="N/A";
            this->sec='-';
        }
        Student(int rollNo){
            this->rollNo;
            this->name="N/A";
            this->sec='-';
        }
        Student(string name){
            this->rollNo;
            this->name=name;
            this->sec='-';
        }
        Student(char sec){
            this->rollNo;
            this->name="N/A";
            this->sec=sec;
        }
        void setRollno(int rollNo){
            this->rollNo;
        }
        void setName(string name){
            this->name;
        }
        void setSec(char sec){
            this->sec;
        }
        int setRollno()const{
            return rollNo;
        }
        string setName()const{
            return name;
        }
        char setSec()const{
            return sec;
        }
        void display(){
            cout<<""
        }
};