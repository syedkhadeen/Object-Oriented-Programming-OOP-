#include<iostream>
using namespace std;
class Account{
    private:
        string name;
        int balance;
    public:
        Account():name("N/A"),balance(0){}
        Account(string n,int b): name(n),balance(b);
        string getName(){
            return name;
        }
        int getBalance(){
            return balance;
        }
        void setName(string n){
            name=n;
        }
        void setBalance(int b){
            balance=b;
        }

        int deposit(int amount){
            if(amount>0){
                balance+=amount;
                cout<<"Rs."<<amount<<" successfully deposited."<<endl;
            }
            else{
                cout<<"Amount should be atleast Rs.1"<<endl;
            }
            return balance;
        }

        int withdraw(int amount){
            if(amount>0){
                balance-=amount;
                cout<<"Rs."<<amount<<" successfully withdrew."<<endl;
            }
            else{
                cout<<"Amount should be atleast Rs.1"<<endl;
            }
            return balance;
        }
};
Account createAccount(){
     Account acc;
     string name;
     int balance;
     cout<<"Enter the account holder's name : "<<endl;
     cin.ignore();
     getline(cin,name);
     acc.setName(name);

     cout<<"Enter the balance of your account : "<<endl;
     cin>>balance;
     acc.setBalance(balance);

     return acc;
     
}
int main(){
    Account account;
    createAccount();
    int choice,depAmount,withAmount;
    while(1){
        cout<<"1. Display Balance\n2. Deposit Amount\n3. Withdraw Amount\n4. Exit"<<endl;
        cin>>choice;
        switch(choice){
            case 1:
                cout<<"Your Balance is : "<<account.getBalance()<<endl;
                break;
            case 2:
                cout<<"Enter the amount you want to deposit : "<<endl;
                cin>>depAmount;
                account.deposit(depAmount);
                break;
            case 3:
                cout<<"Enter the amount you want to withdraw : "<<endl;
                cin>>withAmount;
                account.withdraw(withAmount);
                break;
            case 4:
                return 0;
                break;
        }
    }

}