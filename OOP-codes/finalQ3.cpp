#include<iostream>
using namespace std;
class Robot{
    protected:
        string serialNumber;
        string name;
        int year;
    public:
        virtual void sound()=0;
        virtual ~Robot(){}
};
class BasicRobot:public Robot{
    public:
        void sound(){
            cout<<"BEEP"<<endl;
        }
        BasicRobot(string name,string serialNumber,int year){
            this->name=name;
            this->serialNumber=serialNumber;
            this->year=year;
        }
      /* BasicRobot(int year){
            this->year=year;
        }
        BasicRobot(string serialNumber){
            this->serialNumber=serialNumber;
        }
        */
        ~BasicRobot(){
            cout<<"Basic Robot destructor."<<endl;
        }
        
};
class AdvancedRobot:public Robot{
    public: 
        void sound(){
            cout<<"COMPLEX SOUND"<<endl;
        }
        AdvancedRobot(string name,string serialNumber,int year){
            this->name=name;
            this->serialNumber=serialNumber;
            this->year=year;
        }
        ~AdvancedRobot(){
            cout<<"Advanced Robot destructor."<<endl;
        }
};
int main(){
    Robot* robot[2];
    robot[0]=new BasicRobot("R1","123",2016);
    robot[1]=new AdvancedRobot("R2","145",2020);
    for(int i=0;i<2;i++){
        robot[i]->sound();
    }
    delete robot[2];
}
