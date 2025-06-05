#include<iostream>
#include<fstream>
#include<string>
#include<iomanip>
using namespace std;
class Person{
    public:
        string name;
        Person(string name){
            this->name=name;
        }
        void display(){
            cout<<"Name : "<<name<<endl;
        }
};
class Courses{
    public:
        string name;
        string number;
        int credits;
        char grade;

        Courses(){
            name="N/A";
            number="0";
            credits=0;
            grade='-';
        }

        Courses(string name,string number,int credits,char grade){
            this->name=name;
            this->number=number;
            this->credits=credits;
            this->grade=grade;
        }
    
};
class Student:public Person{
    public:
        int studentID;
        bool tuitionPaid;
        int numCourses;

        Courses* courses;
        Student():Person("N/A"){
            studentID=0;
            tuitionPaid=false;
            numCourses=0;
            courses=nullptr;
        }
        Student(string name,int studentID,bool tuitionPaid,int numCourses,Courses* courses):Person(name){
            this->studentID=studentID;
            this->tuitionPaid=tuitionPaid;
            this->numCourses=numCourses;
            this->courses=courses;
        }
        double calculateGpa(){
            double gradePoints=0.0;
            double totalCredits=0.0;

            for(int i=0;i<numCourses;i++){
                totalCredits+=courses[i].credits;
                switch(courses[i].grade){
                    case 'A':
                        gradePoints+=4.0;
                        break;
                    case 'B':
                        gradePoints+=3.0;
                        break;
                    case 'C':
                        gradePoints+=2.0;
                        break;
                    case 'D':
                        gradePoints+=1.0;
                        break;
                    case 'F':
                        gradePoints+=0.0;
                        break;
                    default:
                        break;
                }
            }
            if(totalCredits==0.0){
                return 0.0;
            }
          return gradePoints/totalCredits;
        }
        void display(){
            Person::display();
            cout<<"Student ID : "<<studentID<<endl;
            cout<<"Number of courses enrolled : "<<numCourses<<endl;
        }

        void printReport(){
            display();
            cout<<"Courses No\tCourse Name\tCredits\tGrade"<<endl;
            for(int i=0;i<numCourses;i++){
            cout<<i+1<<"\t\t"<<courses[i].name<<"\t\t"<<courses[i].credits<<"\t"<<courses[i].grade<<endl;
            }
            int totalCred=0;
            for(int i=0;i<numCourses;i++){
               totalCred+=courses[i].credits;
            }
            cout<<"Total number of credits : "<<totalCred<<endl;
            double gpa=calculateGpa();
            cout<<"Mid-Semester GPA : "<<gpa<<endl;
           cout << setw(30) << setfill('=') << "" << setfill(' ') << endl;
        }
};
int main() {
   string filename ="C:/Users/Khadeen/Desktop/Input.txt";
    ifstream file(filename);
    if(!file.is_open()){
        cout<<"Error in opening the file : "<<filename<<endl;
        return 1;
    }else{
        cout<<"File opened successfully!"<<endl;
    }

    int tutionrate;
    file>>tutionrate;
    int numStudents;
    file>>numStudents;

    Student* students=new Student[numStudents];
    for(int i=0;i<numStudents;i++){
        string firstName,lastName;
        file>>firstName>>lastName;

        string name=firstName+" "+lastName;
        int studentID;
        bool tuitionPaid;
        int numCourses;

        file>>studentID>>tuitionPaid>>numCourses;

        Courses* courses=new Courses[numCourses]();

        for(int j=0;j<numCourses;j++){
            file>>courses[j].name>>courses[j].number>>courses[j].credits>>courses[j].grade;
        }

        students[i]=Student(name,studentID,tuitionPaid,numCourses,courses);
    }

    file.close();

    if(students!=nullptr){
        for(int i=0;i<numStudents;i++){
            students[i].printReport();
            cout<<"\n";
            for(int j=0;j<30;j++){
                cout<<'=';
            }
            cout<<"\n\n";
        }

        delete[] students;
    }
}

