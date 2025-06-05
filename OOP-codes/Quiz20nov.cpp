#include <iostream>
using namespace std;
class PersonData{
private:
    string lastName;
    string firstName;
    string address;
    string city;
    string state;
    string zip;
    string phone;

public:
    string getLastName(){
        return lastName;
    }
    string getFirstName(){ 
        return firstName;
    }
    string getAddress(){
        return address; 
    }
    string getCity(){
        return city; 
    }
    string getState(){
        return state; 
    }
    string getZip(){
        return zip;
    }
    string getPhone(){
        return phone; 
    }
    void setLastName(string getLastName){
        this->lastName=lastName;
    }
    void setFirstName(string firstName){
        this->firstName=firstName;
    }
    void setAddress(string address){
        this->address=address;
    }
    void setCity(string city){
        this->city=city;
    }
    void setState(string state){
        this->state=state;
    }
    void setZip(string zip){
        this->zip=zip;
    }
    void setPhone(string phone){
        this->phone=phone;
    }
};

class CustomerData:public PersonData{
    private:
        int customerNumber;
        bool mailingList;

    public:
        int getCustomerNumber(){
            return customerNumber; 
        }
        bool getMailingList(){
            return mailingList; 
        }
        void setCustomerNumber(int customerNumber){
            this->customerNumber=customerNumber;
        }
        void setMailingList(bool mailingList){
            this->mailingList=mailingList;
        }
};

int main(){
    CustomerData customer;
    customer.setLastName("Syed");
    customer.setFirstName("Khadeen");
    customer.setAddress("Zone 3");
    customer.setCity("Peshawer");
    customer.setState("KPK");
    customer.setZip("12345");
    customer.setPhone("03189177303");
    customer.setCustomerNumber(123);
    customer.setMailingList(true);
    bool mail=customer.getMailingList();
    cout<<"Information of the customer :"<<endl;
    cout<<"Name: " <<customer.getFirstName()<<" "<<customer.getLastName()<< endl;
    cout<<"Address: " <<customer.getAddress()<<endl;
    cout<<"City : "<<customer.getCity()<<endl;
    cout<<"State : "<<customer.getState()<<endl;
    cout<<"ZIP : "<<customer.getZip()<<endl;
    cout<<"Phone: " <<customer.getPhone()<<endl;
    cout<<"Customer Number: " <<customer.getCustomerNumber()<<endl;
    cout<<"Mailing List: " <<mail<<endl;
}
