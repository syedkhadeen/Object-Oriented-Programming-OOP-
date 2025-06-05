#include<iostream>
using namespace std;
class StudentDatabase{
    private:
        int *studentIDs;
        string *studentNames;
        string *studentProjects;
        int capacity;
        int size;
    public:
        StudentDatabase(int maxcapacity):capacity(maxcapacity),size(0){
            studentIDs=new int[capacity];
            studentNames=new string[capacity];
            studentProjects=new string[capacity];
        }
        ~StudentDatabase(){
            delete[] studentIDs;
            delete[] studentNames;
            delete[] studentProjects;
        }
        StudentDatabase(StudentDatabase &other):capacity(other.capacity),size(other.size){
            studentIDs=new int[capacity];
            studentNames=new string[capacity];
            studentProjects=new string[capacity];

            for(int i=0;i<size;i++){
                studentIDs[i]=other.studentIDs[i];
                studentNames[i]=other.studentNames[i];
                studentProjects[i]=other.studentProjects[i];
            }
        }
        void addStudent(int id,string name,string project){
            if(size<capacity){
            studentIDs[size]=id;
            studentNames[size]=name;
            studentProjects[size]=project;
            size++;
            }
            else{
                cout<<"Database full"<<endl;
            }
        }
        void getStudentInfo(int id){
            for(int i=0;i<size;i++){
                if(studentIDs[i]==id){
                    cout << "Student ID: " << studentIDs[i] << std::endl;
                    cout << "Full Name: " << studentNames[i] << std::endl;
                    cout << "Project: " << studentProjects[i] << std::endl;
                    return;
                  }
                }
                cout<<"Student not found with ID : "<<id<<endl;
            }
        void listAllStudents() {
        cout << "List of all students:" << std::endl;
        for (int i = 0; i < size; ++i) {
            std::cout << "Student ID: " << studentIDs[i] << ", Full Name: " << studentNames[i] << ", Project: " << studentProjects[i] << std::endl;
        }
    }

};
int main() {
 // Create a StudentDatabase object
 StudentDatabase database(3);
 // Add student records
 database.addStudent(101, "Alice", "Project A");
 database.addStudent(102, "Bob", "Project B");
 database.addStudent(103, "Charlie", "Project C");
 // Retrieve and display student information by ID
 cout << "Student 101: " <<endl;
 database.getStudentInfo(101);
 cout << "Student 102: "<< endl;
 database.getStudentInfo(102);
 // List all students
 cout << "All Students:" << endl;
 database.listAllStudents();

 // Create a copy of the database using the copy constructor
 StudentDatabase copyOfDatabase (database);
 // List all students in the copied database
 cout << "All Students in Copied Database:" <<endl;
 copyOfDatabase.listAllStudents();
 return 0;
}