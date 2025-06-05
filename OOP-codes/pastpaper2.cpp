#include<iostream>
using namespace std;
class Course{
    private:
        string courseCode;
        string courseName;
    public:
        Course(string courseCode,string courseName){
            this->courseCode=courseCode;
            this->courseName=courseName;
        }
        string getCourseCode(){
            return courseCode;
        }
        string getCourseName(){
            return courseName;
        }
};
class Student{
    private:
        int studentID;
        string name;
        int totalStudents;
        Course* courses;
    public:
        Student(int id,string n):studentID(id),name(n),totalStudents(0),courses(nullptr){}
        ~Student(){
            delete[] courses;
        }
        int getStudentID(){
            return studentID;
        }
        string getStudentName(){
            return name;
        }
        void enrollCourses(Course &c){
            Course* newCourse=new Course[totalStudents+1];
            for(int i=0;i<totalStudents;i++){
                newCourse[i]=courses[i];
            }                                           
            newCourse[totalStudents]=c;
            delete[] courses;
            courses=newCourse;
            totalStudents++;
        }
        void displayEnrolledCourses(){
            cout<<"Enrolled courses for student"<<name<<"\nID : "<<studentID<<endl;
            for(int i=0;i<totalStudents;i++){
                cout<<" - "<<courses[i].getCourseCode()<<": "<<courses[i].getCourseName()<<endl;
            }
            cout<<endl;
        }
};
int main(){
    Course math("MATH101","Maths");
    Course cs("CS101","ICS");

    Student s1(1,"Ali");
    Student s2(2,"Ahmad");
    s1.enrollCourses(math);
    s1.enrollCourses(cs);

    s2.enrollCourses(math);
    s1.displayEnrolledCourses();
    s2.displayEnrolledCourses();

}
