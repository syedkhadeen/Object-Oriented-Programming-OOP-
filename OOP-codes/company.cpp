#include<iostream>
using namespace std;
class Company{
    private:
        int id;
        string name;
        string jobTitle;
        int hours;
        int salary;
    public:
            GroceryStore(){
            id=0;
            name="N/A";
            jobTitle="N/A";
            hours=0;
        }
        GroceryStore(int id,string name,string jobTitle,int hours,int salary){
            this->id=id;
            this->name=name;
            this->jobTitle=jobTitle;
            this->hours=hours;
            this->salary=salary;
        }
        void setID(int id){
            this->id=id;
        }
        void setName(string name){
            this->name=name;
        }
        void setjobTitle(string jobTitle){
            this->jobTitle=jobTitle;
        }
        void sethours(int hours){
            this->hours=hours;
        }
        void setSalary(int salary){
            this->salary=salary;
        }
        int getId()const{
            return id;
        }
        string getName()const{
            return name;
        }
        string getJobTitle()const{
            return jobTitle;
        }
        int gethours()const{
            return hours;
        }
        int getSalary()const{
            return salary;
        }
        int calc_salary(int salary){
            if(hours>40){
                int newsalary=(hours-40)*salary;
                 return newsalary*2;
            }
            else{
                return salary*hours;
            }
        }

};
int main(){
    int total,id,hours,salary;
    string name,job;
    cout<<"Enter the total employees : "<<endl;
    cin>>total;
    Company s[total];
    for(int i=0;i<total;i++){
        cout<<"Enter the id : "<<endl;
        cin>>id;
        s[i].setID(id);
        cout<<"Enter the name : "<<endl;
        cin>>name;
        s[i].setName(name);
        cout<<"Enter the job title : "<<endl;
        cin>>job;
        s[i].setjobTitle(job);
        cout<<"Enter hours : "<<endl;
        cin>>hours;
        s[i].sethours(hours);
        cout<<"Enter the salary per hour : "<<endl;
        cin>>salary;

        cout<<"Your salary is : "<<s[i].calc_salary(salary)<<endl;
    }

    
}