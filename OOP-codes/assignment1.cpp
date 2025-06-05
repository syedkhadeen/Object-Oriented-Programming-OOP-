#include <iostream>
using namespace std;

struct User {
    int id=0;
    string firstName="N/A";
    string lastName="N/A";
    string password="N/A";
};

struct SalePerson {
    User data;
    int salesperson[4];
    double salesByQtr[4]={0.0};
    double totalSale=0.0; 
};

struct Admin {
    User data;
};
void adminMenu(SalePerson[],int&);
void displayAllRecords(SalePerson[],int);
void displaySingleSalepersonRecord(SalePerson[],int);
void addSalePerson(SalePerson[],int&);
void salepersonMenu(SalePerson[],int);
void mainMenu(SalePerson[],int&);
int main() {
    SalePerson s[5]; 
    int size=0;   

    mainMenu(s,size);

    return 0;
}

void displayAllRecords(SalePerson s[],int size){
    float maxSale=-1.0;
    int maxSalePersonIndex=-1;
    float maxSaleByQtr[4]={0.0};
    int maxSaleQtr=-1;
    float totalByQuarter[4]={0.0};
    cout<<"\nNow displaying all records:"<<endl;
    cout<<"ID\t\tQT1\t\tQT2\t\tQT3\t\tQT4\t\tTotal"<<endl;
    cout<<"______________________________________________________________________________________" << endl;
    for(int a=0;a<size;a++){
        cout<<s[a].data.id;
        float quarterTotal=0.0;
        for(int k=0;k<4;k++){
            cout<<"\t\t"<<s[a].salesByQtr[k];
            quarterTotal+=s[a].salesByQtr[k];
            if(s[a].salesByQtr[k]>maxSaleByQtr[k]){
                maxSaleByQtr[k]=s[a].salesByQtr[k];
                maxSaleQtr=k+1;
            }
            totalByQuarter[k]+=s[a].salesByQtr[k];
        }
        s[a].totalSale=quarterTotal;
        if (quarterTotal>maxSale){
            maxSale=quarterTotal;
            maxSalePersonIndex=a;
        }
        cout<<"\t\t"<<quarterTotal<<endl;
    }
    cout<<"Total";
    for(int k=0;k<4;k++){
        cout<<"\t\t"<<totalByQuarter[k];
    }
    cout<<endl;

    if(maxSalePersonIndex!=-1){
        cout<<"\nMax Sale by SalesPerson: ID = "<<s[maxSalePersonIndex].data.id<< ", Amount = $"<<maxSale<<endl;
    }

    if (maxSaleQtr!=-1){
        cout<<"Max Sale by Quarter: Quarter = "<<maxSaleQtr<<", Amount = $"<<maxSaleByQtr[maxSaleQtr-1]<<endl;
    }
    cout<<"Press 1 for adminMenu"<<endl;
    cout<<"Press 0 for main menu"<<endl;
    cout<<"Your choice: ";

    int choice;
    cin>>choice;
    if(choice==1){
        adminMenu(s,size);
    } else if(choice==0){
        mainMenu(s,size);
    }
}

void displaySingleSalepersonRecord(SalePerson s[], int size) {
    cout<<"\nNow displaying Single Salesperson record:" << endl;
    cout<<"Enter Salesperson ID: ";
    int id;
    cin>>id;

    for(int i=0;i<size;i++) {
        if (s[i].data.id==id) {
            cout<< "ID: "<<s[i].data.id<<endl;
            cout<< "First Name: "<<s[i].data.firstName << endl;
            cout<< "Last Name: "<<s[i].data.lastName<<endl;
            cout<< "Sales by Quarter: ";
            for (int j=0;j<4;j++){
                cout<<s[i].salesByQtr[j]<<"\t";
            }
            cout<<endl;
            cout<<"Total Sale: "<<s[i].totalSale<<endl;
            break;
        }
    }

    cout<<"Press 1 for adminMenu"<<endl;
    cout<<"Press 0 for main menu (logout)"<<endl;
    cout<<"Your choice: ";

    int choice;
    cin>>choice;
    if(choice==1){
        adminMenu(s,size);
    } else if(choice==0) {
        mainMenu(s,size);
    }
}

void addSalePerson(SalePerson s[],int &size){
    if(size<5) {
        cout<<"Enter Salesperson ID: ";
        cin>>s[size].data.id;
        cout<<"Enter First Name: ";
        cin>>s[size].data.firstName;
        cout<<"Enter Last Name: ";
        cin>>s[size].data.lastName;
        cout<<"Enter Sales by Quarter: ";
        for(int j=0;j<4;j++){
            cin>>s[size].salesByQtr[j];
            s[size].totalSale+=s[size].salesByQtr[j];
        }
        size++;
    }else{
        cout<<"Maximum number of Salespersons reached (5)."<<endl;
    }
    mainMenu(s,size);
}

void adminMenu(SalePerson s[], int &size){
    Admin admin;
    int c;
    cout<<"Are you logging in for the first time?(Press 1 for YES and 0 for NO)"<<endl;
    cin>>c;
    if(c==1){
    cout<<"\nAdmin menu:"<<endl;
    cout<<"Password : "<<admin.data.password<<endl;
    cout<<"Set Your password : ";
    cin>>admin.data.password;
    }
    cout<<"Press 1 for displaying the complete record"<<endl;
    cout<<"Press 2 for displaying a single salesperson record"<<endl;
    cout<<"Press 3 to add a Salesperson"<<endl;
    cout<<"Press 0 for main menu"<<endl;
    cout<<"Your choice: ";
  

    int choice;
    cin>>choice;
    if(choice==1)
        displayAllRecords(s,size);
    else if(choice==2)
        displaySingleSalepersonRecord(s,size);
    else if(choice==3)
        addSalePerson(s,size);
    else if(choice==0)
        mainMenu(s,size);
}

void salepersonMenu(SalePerson s[],int size){
    string pass;
    cout<<"\nSaleperson menu:"<<endl;
    int id,c;
    cout<<"Enter Your ID: ";
    cin>>id;
    int index=-1;

    for(int i=0;i<size;i++){
        if(s[i].data.id==id){
            index=i;
            break;
        }
    }

    if(index!=-1){
        cout<<"Are you logging in for the first time?(Press 1 for YES and 0 for NO)"<<endl;
        cin>>c;
        if(c==1){
        cout<<"Password : " <<s[index].data.password<<endl;
        cout<<"Set Your password : ";
        cin>>s[index].data.password;
        }
        cout<<"ID : " <<s[index].data.id<<endl;
        cin.ignore();
        cout<<"Enter your password : "<<endl;
        getline(cin,pass);
        if(pass==s[index].data.password){
        cout<<"First Name : "<<s[index].data.firstName<<endl;
        cout<<"Last Name  : "<<s[index].data.lastName<<endl;

        for(int j = 0; j < 4; j++) {
             cout << "Enter your sales in QT" << (j + 1) << " : ";
            cin >> s[index].salesByQtr[j];
            s[index].totalSale += s[index].salesByQtr[j];
            }
        cout<<"The Total Amount by ID "<<s[index].data.id<<" is : "<< s[index].totalSale-10<<endl;
    } 
    else{
        cout<<"Wrong password!"<<endl;
    }
}
else{
        cout<<"Salesperson with ID "<<id<<" not found."<<endl;
    }
  mainMenu(s,size);
}

void mainMenu(SalePerson s[],int &size){
    cout<<"Welcome to Sales Management System!!!"<<endl;
    cout<<"Please select from the following menu:"<<endl;
    cout<<"press 1 for admin mode"<<endl;
    cout<<"press 2 for salesperson mode"<<endl;
    cout<<"\nyour choice: ";

    int choice;
    cin>>choice;
    if(choice==1)
        adminMenu(s,size);
    else if(choice==2)
        salepersonMenu(s,size);
}