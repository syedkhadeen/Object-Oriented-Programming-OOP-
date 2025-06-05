#include<iostream>
using namespace std;
class GroceryStore{
    private:
        int id;
        string name;
        double price;
        int quantity;
    public:
        GroceryStore(){
            id=0;
            name="N/A";
            price=0.0;
            quantity=0;
        }
        GroceryStore(int id,string name,double price,int quantity){
            this->id=id;
            this->name=name;
            this->price=price;
            this->quantity=quantity;
        }
        ~GroceryStore(){
            cout<<"Object is destroyed."<<endl;
        }
        void setID(int id){
            this->id=id;
        }
        void setName(string name){
            this->name=name;
        }
        void price(double price){
            this->price=price;
        }
        void getQuantity(){
            this->quantity=quantity;
        }
        int getId()const{
            return id;
        }
        string getName()const{
            return name;
        }
        double getPrice()const{
            return price;
        }
        int getQuantity()const{
            return quantity;
        }

};
void DisplayItems(int items){
    cout<<"Name : "<<
    for(int i=0;i<items;i++){
        cout<<"Item number "<<i+1<<" has the price of :  "<<a[i]<<endl;
    }
}
int main(){
    GroceryStore s[2];
    string name;
    int items,c;
    int a[items];
    for(int i=0;i<2;i++){
        cout<<"Enter your name : "<<endl;
        cin>>s[i].getName;
        cout<<"Enter the id : "<<endl;
        cin>>s[i].getId;
        cout<<"Enter the items : "<<endl;
        cin>>items;
        for(int j=0;j<items;j++){
            cout<<"Enter the price for item "<<j+1<<" : "<<endl;
            cin>>s[i].a[items];
        }
    }
    cout<<"1) Display items\n2) Update items list\n3) Search items by id"<<endl;
    cin>>c;
    switch(c){
        case 1:

    }


}
