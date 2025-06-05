#include <iostream>
using namespace std;

class PersonType{
     public:
        string firstName,lastName;
        void setName(string firstName,string lastName){
            this->firstName=firstName;
            this->lastName=lastName;
        }
        string getFirstName(){
            return firstName;
        }
        string getLastName(){
            return lastName;
        }
        PersonType(string firstName=" ",string lastName=" ");
};

class DateType{
    public:
        int day,month,year;
        void setDate(int day,int month,int year){
            this->day=day;
            this->month=month;
        }
        int getDay(){
            return day;
        }
        int getMonth(){
            return month;
        }
        int getYear(){
            return year;
        }
    DateType(int d=1,int m = 1,int y=2022):day(d),month(m),year(y){
        if(month<1||month>12){
            month = 1;
        }
        if((month==1||month==3||month==5||month==7||month==8||month==10||month==12)&&(day< 1||day>31)){
            day=1;
        } 
        else if((month==4||month==6||month==9||month==11)&&(day<1||day>30)){
            day=1;
        } else if(month==2){
            bool leapYear=((year%4==0 && year%100!=0)||(year%400==0));
            if(leapYear&&(day<1||day>29)){
                day = 1;
            } 
            else if(!leapYear && (day<1||day>28)){
                day = 1;
            }
        }
        if(year<1900||year>2022){
            year=2022;
        }
    }
    void printDate(DateType &date){
        cout<<date.day<<"/"<<date.month<<"/"<<date.year;
}
};
class PersonalInfo{
    public:
        PersonType Name;
        int personID;
        DateType bDay;
   
        void setPersonalInfo(string firstname,string lastname,int day,int month,int year,int personID){
                this->Name=Name;
                this->bDay=bDay;
                this->personID=personID;
        }
        PersonalInfo(string fname="",string lname="",int id,DateType dob = DateType())
            : Name({fname,lname}),personID(id),bDay(dob) {}
    
        void printPersonalInfo(PersonalInfo &person) {
            cout<<"PersonType: " << person.Name.firstName << " " << person.Name.lastName << endl;
            cout<<"Person ID : " << person.personID << endl;
            cout<<"Date of Birth: ";
            printDate(person.bDay);
            cout<<endl;
}
};

int main(){
    PersonalInfo person("Syed","Khadeen",12345 ,DateType(1,11,2003));
    printPersonalInfo(person);
}
