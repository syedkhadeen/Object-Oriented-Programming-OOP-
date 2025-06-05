#include<iostream>
using namespace std;
class Dice{
    private:
        int value;
    public:
        Dice(){
            value=0;
        }
        void setValue(int v){
            value=v;
        }
        int getValue(){
            return value;
        }
        int roll(){
           int randomValue=(rand()%6)+1;
           setValue(randomValue);
           cout<<"Side : "<<getValue();
           if(getValue()==6){
            cout<<" CHAKKA"<<endl;
           }
           else{
            cout<<" (Better luck next time)"<<endl;
           }
        }
};
int main(){
    Dice dice;
    char c;
    while(1){
        cout<<"Do you want to roll the dice? Y/N"<<endl;
        cin>>c;
        switch(c){
            case 'Y':
                dice.roll();
                break;
            case 'N':
                cout<<"Exiting proram"<<endl;
                return 0;
        }
    }
}