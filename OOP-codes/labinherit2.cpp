#include<iostream>
using namespace std;
class Boat{
    protected:
        int length;
    public:
        Boat(int length){
            this->length=length;
        }
    void swim(){
        cout<<"I am swimming."<<endl;
    }
};
class Plane{
    protected:
        int maxAltitude;
    public:
        Plane(int maxAltitude){
            this->maxAltitude=maxAltitude;
        }
        void fly(){
            cout<<"I can fly."<<endl;
        }
};
class Skimmer: protected Boat,protected Plane{
    private:
        int numPassngers;
    public:
        Skimmer(int length,int altitude,int passengers) : Boat(length),Plane(altitude){
            numPassngers=passengers;
        }
    
        void swimAndFly(){
            swim();
            fly();
        }
        void display(){
            cout<<"Length : "<<length<<" feet."<<endl;
            cout<<"Max Altitude : "<<maxAltitude<<"feet."<<endl;
            cout<<"Passengers : "<<numPassngers<<"feet."<<endl;
        }
};
int main(){
    Skimmer s(40,1300,2);
    s.display();
    s.swimAndFly();
}