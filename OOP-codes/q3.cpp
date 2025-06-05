#include<iostream>
using namespace std;
class Student{
    private:
        int rollNo;
        string name;
        char sec;
        static int student_counter;
        int marks[5];
    public:
        Student(int rollNo=0,string name="N/A",char sec='-',int marks[5]={0}){
            this->rollNo=rollNo;
            this->name=name;
            this->sec=sec;
            for(int i=0;i<5;i++){
                this->marks[i]=marks[i];
            }
             student_counter++;
        }
        void setRollno(int rollNo){
            this->rollNo=rollNo;
        }
        void setName(string name){
            this->name=name;
        }
        void setSec(char sec){
            this->sec=sec;
        }
        void setMarks(const int marks[5]){
            for(int i=0;i<5;i++){
               this-> marks[i]=marks[i];
            }
        }
        int getRollno()const{
            return rollNo;
        }
        string getName()const{
            return name;
        }
        char getSec()const{
            return sec;
        }
        const int* getMarks()const{
            return marks;
        }
        double getAvg()const{
            double sum=0;
            for(int i=0;i<5;i++){
                sum+=marks[i];
            }
            return sum/5;
        }
        int getStudentcount(){
            return student_counter;
        }
        void getStudents()const{
            cout<<"Roll No : "<<rollNo<<endl;
            cout<<"Name : "<<name<<endl;
            cout<<"Section : "<<sec<<endl;
            cout<<"Marks : "<<endl;
            for(int i=0;i<5;i++){
                cout<<marks[i]<<"\t";
            }
            cout<<endl;
        }

};

int Student::student_counter=0;

int main(){
    int marks1[]={1,2,3,4,5};
    int marks2[]={34,54,52,63,61};
    Student s1(1,"Ali",'A',marks1);
    Student s2(2,"Ahmad",'B',marks2);

    cout<<"Average marks of Student 1 are : "<<s1.getAvg()<<endl;
    cout<<"Average marks of Student 2 are : "<<s2.getAvg()<<endl;
    cout<<endl;
    s1.getStudents();
    cout<<endl;
    s2.getStudents();
    cout<<"Total number of Students are : "<<s1.getStudentcount()<<endl;
}
struct Point{
    int x[4];
};
struct Line{
    Point p1,p2;
};
struct Square{
    Line line[4];
};
