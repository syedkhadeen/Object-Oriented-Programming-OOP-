#include<iostream>
using namespace std;
struct student{
    string name;
    int marks[3];
};
void Display_data(student s[]){
    for(int k=0;k<2;k++){
        cout<<"The name of Student "<<k+1<<" : "<<s[k].name<<endl;
        for(int a=0;a<3;a++){
        cout<<"The marks of Subject "<<a+1<<" : "<<s[k].marks[a]<<endl;    
        }
    }
}
void Change_Marks(student s[]){
    int student;
    int courseNum;
    int newMarks;
    cout<<"Enter the student number to update (1, 2) : ";
    cin>>student;
    cout<<"Enter the course number to update (1, 2, or 3) : ";
    cin>>courseNum;
    cout<<"Enter the updated marks : ";
    cin>>newMarks;
    
    s[student].marks[courseNum-1]=newMarks;
}
void Calc_Average_Marks(student s[]){
    int n;
    float avg;
    cout<<"Enter the student number to calculate his average (1,2) : "<<endl;
    cin>>n;
    avg=(s[n].marks[1]+s[n].marks[2]+s[n].marks[3])/3;
    cout<<"The Average of student "<<n<<" is : "<<avg;
}
int main(){
      int choice;
      student s[2];
      for(int i=0;i<2;i++){
        cout<<"Enter your name : "<<endl;
        cin>>s[i].name;
        for(int j=0;j<3;j++){
            cout<<"Enter the marks of your subject "<<j+1<<" : "<<endl;
            cin>>s[i].marks[j];
        }
      }
      cout<<"MENU"<<endl;
      cout<<"1. Display Student Data"<<endl;
      cout<<"2. Calculate Average Marks"<<endl;
      cout<<"3. Change Marks"<<endl;
      cout<<"Enter your choice : ";
      cin>>choice;

      switch(choice){
        case 1:
            Display_data(s); 
            break;
        case 2: 
            Calc_Average_Marks(s);
            break;
        case 3:
            Change_Marks(s);
            break;
      }
}