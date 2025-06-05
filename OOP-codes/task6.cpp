#include<iostream>
#include<iomanip>
using namespace std;
/*
class A{
    private:
        string serialnum;
        static int count;
    public:
        A(string serialnum){
            this->serialnum=serialnum;
            cout<<"I'm object with Serial Number : "<<serialnum<<endl;
            count++;
        }
        static int get_count(){
            return count;
        }
};
int A::count=0;
int main(){
    A one("2022FAST100P");
    A two("2022FAST200P");
    A three("2022FAST300P");
    cout<<"Total objects are : "<<A::get_count()<<endl;
}
*/
class SavingsAccount{
    private:
        static double annualInterestRate;
        double savingsBlance;
    public:

        SavingsAccount(double balance):savingsBlance(balance){}
        double calculateMonthlyInterest(){
            double monthlyInterest=(savingsBlance*annualInterestRate)/12;
            savingsBlance+=monthlyInterest;
        }
        void displayBalance(){
            cout<<"Current balance : $"<<setprecision(2)<<savingsBlance<<endl;
        }
        static void modifyInterest(double newRate){
            annualInterestRate=newRate;
        }
};
double SavingsAccount::annualInterestRate=0.03;
int main(){
    SavingsAccount s1(200.0);
    SavingsAccount s2(300.0);

    SavingsAccount::modifyInterest(0.03);

    cout<<"Before Interest Rate Modification : "<<endl;
    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    s1.displayBalance();
    s2.displayBalance();

    SavingsAccount::modifyInterest(0.04);

    cout<<"After Interest Rate Modification : "<<endl;
    s1.calculateMonthlyInterest();
    s2.calculateMonthlyInterest();
    s1.displayBalance();
    s2.displayBalance();
}