#include<iostream>
using namespace std;
class arrivalTimeEmp{
    private:
        int hour;
        int min;
        int sec;
    public:
        arrivalTimeEmp(int hour=0,int min=0,int sec=0){
            this->hour=hour;
            this->min=min;
            this->sec=sec;
        }
        void setHour(int hour){
            if(hour<0 || hour>24){
                hour=0;
            }
            else{
                this->hour=hour;
            }
        }
        void setMin(int min){
            if(min<0 || min>59){
                min=0;
            }
            else{
                this->min=min;
            }
        }
        void setSec(int sec){
            if(sec<0 || sec>59){
                sec=0;
            }
            else{
                this->sec=sec;
            }
        }
        int getHour()const{
            return hour;
        }
        int getMin()const{
            return min;
        }
        int getSec()const{
            return sec;
        }
        void displayTime(){
            cout<<"Time - "<<hour<<":"<<min<<":"<<sec<<endl;
        }
};
int main(){

    arrivalTimeEmp emp[100];
    emp[2].setHour(4);
    emp[2].setMin(5);
    emp[2].setSec(59);
    emp[2].displayTime();
    
}