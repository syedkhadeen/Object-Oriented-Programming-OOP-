#include<iostream>
using namespace std;
class Hardware{
    private:
        string partNum;
        string description;
        int item;
        int price;
    public:
        Hardware(string partNum,string description,int item,int price){
            this->partNum=partNum;
            this->description=description;
            this->item=item;
            this->price=price;
        }
        void setpartNum(string partNum){
            this->partNum=partNum;
        }
        void setDescription(string description){
            this->description=description;
        }
        void setItem(int item){
            this->item=item;
        }
        void setPrice(int price){
            this->price=price;
        }
        string getPartNum()const{
            return partNum;
        }
        string getDescription()const{
            return description;
        }
        int getItem()const{
            return item;
        }
        int getPrice()const{
            return price;
        }
        int getInvoiceAmount(){
            int value=price*item;
            if(value<0){
                value=0;
            }
            return value;
        }
        void showInvoice(){
            cout<<"The Part Number is : "<<partNum<<endl;
            cout<<"The Description is : "<<description<<endl;
            cout<<"The items are : "<<item<<endl;
            cout<<"The price is : "<<price<<endl;
        }
};
int main(){
    Hardware obj("123h2","abc",10,1000);
    obj.showInvoice();
    cout<<"The invoice amount is : "<<obj.getInvoiceAmount()<<endl;

    
}