#include<iostream>
using namespace std;
class Rate{
    private:
        float population;
        float birth;
        float death;
    public:
    Rate(float population,float birth,float death){
        population=0;
        birth=0;
        death=0;
    }
        void setPopulation(float population){
            this->population=population;
        }
        void setBirth(float birth){
            this->birth=birth;
        }
        void setDeath(float death){
            this->death=death;
        }
        float getPopulation(){
            return population;
        }
        float getBirth(){
            return birth;
        }
        float getDeath(){
            return birth;
        }
        float BirthRate(float birth,float population){
            return birth/population;
        }
        float DeathRate(float death,float population){
            return death/population;
        }
};
int main(){
    Rate R(100000,8000,6000);
    cout<<"Birth rate is : "<<R.BirthRate(8000,100000)<<endl;
    cout<<"Death rate is : "<<R.DeathRate(6000,100000)<<endl;
}