#include<iostream>
using namespace std;
class Date{
    private:
        int day,month,year;
    public:
        Date(int day,int month,int year):day(day),month(month),year(year){}
       
        Date operator+(Date& other){
            int newDay=day+other.day;
            int newMonth=month+other.month;
            int newYear=year+other.year;
            if(newDay>31){
                newDay-=31;
                newMonth++;
            }
            if(newMonth>12){
            newMonth-=12;
            newYear++;
            }
            return Date(newDay,newMonth,newYear);
        }
        int operator - (Date&other){
            int totalDays1=day+month*30+year*365;
            int totalDays2=other.day+other.month*30+other.year*365;
            return totalDays1-totalDays2;
        }
        void print(){
            cout<<"Date : "<<day<<"/"<<month<<"/"<<year<<endl;
        }
};
int main(){
    Date date1(10,11,2001);
    Date date2(30,12,2002);
    Date result=date1+date2;
    result.print();
    int result2=date2-date1;
    cout<<endl<<"Total Days : "<<result2;
}