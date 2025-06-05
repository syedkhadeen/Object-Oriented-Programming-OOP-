#include<iostream>
using namespace std;
int main(){
    int salary;
    cout<<"Enter your salary : "<<endl;
    cin>>salary;
    if(salary<10000){
        cout<<"Your salary is Rs."<<salary<<endl;
    }
    else if(salary>=10000 && salary<20000){
        int n=salary-1000;
        cout<<"Your salary is : Rs."<<n<<endl;
    }
    else if(salary>=20000){
        float deduct=salary*0.07;
        cout<<"Your salary is : Rs."<<salary-deduct<<endl;
    }
}


  cout<<"Enter the name of the student : "<<endl;
        cin>>a.name;
        cout<<"Enter the marks for subject "<<i+1<<" : "<<endl;
        for(int j=0;j<3;j++){
            cin>>a[j].marks;
        }

        cout<<"Enter the name of the second student : "<<endl;
        cin>>b.name;
        cout<<"Enter the marks for subject "<<i+1<<" : "<<endl;
        for(int j=0;j<3;j++){
            cin>>b[j].marks;
        }