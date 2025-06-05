#include<iostream>
using namespace std;
class BankAccount{
    private:
        int accountNumber;
        string accountHolder;
        double balance;
        static int counter;
    public:
        BankAccount(string name="N/A"){
            accountNumber=++counter;
            accountHolder=name;
            double balance=0.0;
        }
        void deposit(double amount){
            balance+=amount;
        }
        void withdraw(double amount){
            if(amount>balance){
                return;
            }
            balance-=amount;
        }
        double getBalance()const{
            return balance;
        }
        string getAccountName()const{
            return accountHolder;
        }
        int getAccountNumber()const{
            return accountNumber;
        }
        static int getTotalAccounts(){
            return counter;
        }
};
int BankAccount::counter=0;

class BankManager{
    private:
        BankAccount* accounts[50];
    public:
        void createAccount(string name){
            BankAccount* account=new BankAccount(name);
        }
        void deleteAccount(int accNum){
            if(accounts[accNum]!=nullptr){
                delete accounts[accNum];
            }
        }
        BankAccount* findAcc(int accNum){
            return accounts[accNum];
        }
        void display(){
            cout<<"Bank Accounts : "<<endl;
            for(int i=0;i<=50;i++){
                BankAccount* account=accounts[i];
            if(account!=nullptr){
                cout<<"Account number "<<account->getAccountNumber()<<": "<<endl;
                cout<<"Name of the Account's Holder : "<<account->getAccountName()<<endl;
                cout<<"Total Balance is : "<<account->getBalance()<<endl;
             }
            }
        }        
};
int main(){
    BankManager manager;
    int c,accNum,findNum;
    string name;
    BankAccount* account=nullptr;
    while(1){
        cout<<"Bank Management System"<<endl;
        cout<<"1. Create Account"<<endl;
        cout<<"2. Delete Account"<<endl;
        cout<<"3. Find Account"<<endl;
        cout<<"4. Display Accounts"<<endl;
        cout<<"5. Exit"<<endl;
        cout<<"Enter your choice : ";
        cin>>c;

        switch(c){
            case 1:
                cout<<"Enter the name of account holder : ";
                cin>>name;
                manager.createAccount(name);
                break;
            case 2:
                cout<<"Enter account number to delete : ";
                cin>>accNum;
                manager.deleteAccount(accNum);
                break;
            case 3:
                cout<<"Enter the account number you want to find : ";
                cin>>findNum;
                account=manager.findAcc(findNum);
                if(account!=nullptr){
                    cout<<"The account is found."<<endl;
                    cout<<"Account number "<<account->getAccountNumber()<<": "<<endl;
                    cout<<"Name of the Account's Holder : "<<account->getAccountName()<<endl;
                }
                else{
                    cout<<"Account Not found!"<<endl;
                }
                break;
            case 4:
                manager.display();
                break;
            case 5:
                return 0;
            default:
                cout<<"Wrong input. Try again."<<endl;
                 break;
        }
    }
}
