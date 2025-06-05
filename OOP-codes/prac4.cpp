#include<iostream>
using namespace std;
class Chair{
    private:
        float price;
        int legs;
        string tag;
    public:
        Chair(float price,int legs,string tag):price(price),legs(legs),tag(tag){}
};
class Classroom{
    private:
        int roomNo;
        int capacity;
        Chair *chairs;
        int assignedChairs;
    public:
        Classroom(int roomNo):roomNo(roomNo),capacity(20),assignedChairs(0){
            chairs = new Chair[capacity];
        }
        friend void assignChairs(Classroom& classroom,Chair &chair);
        ~Classroom(){
            delete [] chairs;
            cout<<"ClassRoom "<<roomNo<<"deleted"<<endl;
        }
};
void assignChairs(Classroom& classroom,Chair &chair){
    if(chair.assignedChairs<classroom.capacity){
        classroom.chairs[classroom.assignedChairs]=chair;
        classroom.assignedChairs++;
        cout<<"Chair assigned to Room no : "<<classroom.roomNo<<endl;
    }
    else{
        cout<<"Room no : "<<classroom.roomNo<<"is full"<<endl;
    }
}
class School{
    private:
        string name;
        string address;
        int id;
        Classroom *classrooms;
        int numClassrooms;
    public:
        School(string name,string address,int id):name(name),address(address),id(id),numClassrooms(5){
            classrooms = new Classroom[numClassrooms];
        }
        Classroom createClassroom(int roomNo){
            return Classroom[roomNo-101];
        }
        ~School(){
            delete[] classrooms;
            cout<<"School "<<name<<" deleted"<<endl;
        }
};
int main() {
    School mySchool("ABC School", "123 Main St", 1);

    Classroom classroom1 = mySchool.createClassroom(101);
    Classroom classroom2 = mySchool.createClassroom(102);

    Chair chair1(20.0, 4, "A1");
    Chair chair2(25.0, 3, "B2");

    assignChairs(classroom1, chair1);
    assignChairs(classroom2, chair2);

    return 0;
}
