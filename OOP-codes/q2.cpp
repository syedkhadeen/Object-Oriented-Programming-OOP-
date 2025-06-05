#include<iostream>
using namespace std;
struct Details{
    string name;
    int accountNum;
    int bankBalance;
};
void displayDetails(Details x,Details y,Details z){
    if(x.bankBalance<200){
        cout<<"Name : "<<x.name<<endl;
        cout<<"Balance : "<<x.bankBalance<<endl;
    }
    else if(x.bankBalance>1000){
        x.bankBalance+=100;
        cout<<"Name : "<<x.name<<endl;
        cout<<"Balance : "<<x.bankBalance<<endl;
    }

    if(y.bankBalance<200){
        cout<<"Name : "<<y.name<<endl;
        cout<<"Balance : "<<y.bankBalance<<endl;
    }
    else if(y.bankBalance>1000){
        y.bankBalance+=100;
        cout<<"Name : "<<y.name<<endl;
        cout<<"Balance : "<<y.bankBalance<<endl;
    }
    if(z.bankBalance<200){
        cout<<"Name : "<<z.name<<endl;
        cout<<"Balance : "<<z.bankBalance<<endl;
    }
    else if(z.bankBalance>1000){
        z.bankBalance+=100;
        cout<<"Name : "<<z.name<<endl;
        cout<<"Balance : "<<z.bankBalance<<endl;
    }
}
int main(){

    Details user1,user2,user3;
    user1={"Ali",12345,5000};
    user2={"Imran",55666,15000};
    user3={"Ahmad",13579,100};

    displayDetails(user1,user2,user3);
}
