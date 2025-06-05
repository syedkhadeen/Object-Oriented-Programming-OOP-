#include <iostream>
using namespace std;
class Account{
    protected:
        double balance;
    public:
        Account(double balance){
            if(balance>=0.0){
                this->balance=balance;
            }
            else{
                balance=0.0;
                cout<<"Balance must be above Rs. 0"<<endl;
            }
        }

    void deposit(double amount){
        balance+=amount;
    }
    void debit(double amount){
            if(amount>balance){
                cout<<"The amount you entered is more than balance.";
                return;
            }
            balance-=amount;
        }
    double getBalance(){
        return balance;
    }
};
class SavingsAccount:public Account{
    private:
        double interest;
    public:
        SavingsAccount(double balance,double interest):Account(balance),interest(interest){}

        double interest_calculate(){
            return balance*interest;
        }
};
class CheckingAccount:public Account{
    private:
        double fee;
    public:
        CheckingAccount(double balance,double fee):Account(balance),fee(fee){}

    void FeeDeduct(){
        balance-=fee;//balance=balance-fee
    }
};
int main() {  
    SavingsAccount SA(1500.0,0.5);
    CheckingAccount CA(300.0,2.0);

    SA.deposit(400.0);
    CA.deposit(600.0);
    
    SA.deposit(SA.interest_calculate());
    CA.debit(100.0);

    cout<<"Savings Account Balance: "<<SA.getBalance()<<endl;
    cout<<"Checking Account Balance: "<<CA.getBalance()<<endl;

    return 0;
}