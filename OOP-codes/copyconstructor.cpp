#include<iostream>
using namespace std;
/*class Student{
    private:
        char sec;
    public:
        Student(){
            cout<<"Defeault constructor\n";
        }
        Student(Student &obj){
                setSec(obj.sec);
                cout<<"copy constructor\n";
        }
        void setSec(char sec){
            this->sec=sec;
        }
        char getSec(){
            return sec;
        }
};
int main(){
    Student ali;
    ali.setSec('A');
    cout<<"ali sec : "<<ali.getSec()<<endl<<endl;
    Student mahad(ali);
    cout<<"mahad sec : "<<mahad.getSec()<<endl<<endl;
    Student akhtar;
    akhtar=ali;
    cout<<"akhtar sec : "<<akhtar.getSec()<<endl;
}
class Student{
    private:
        char sec;
    public:
        Student(){
            cout<<"Defeault constructor\n";
        }
        void setSec(char sec){
            this->sec=sec;
        }
        char getSec(){
            return sec;
        }
};
Student fun(Student obj){
    Student mahad(obj);
    cout<<"mahad sec : "<<mahad.getSec()<<endl<<endl;
    return mahad;
}
int main(){
    Student ali;
    ali.setSec('A');
    cout<<"ali sec : "<<ali.getSec()<<endl<<endl;
    Student imran(ali);
    cout<<"imran sec : "<<imran.getSec()<<endl<<endl;
    Student zain=fun(ali);
    cout<<"zain sec : "<<zain.getSec()<<endl<<endl;
    Student akhtar;
    akhtar=ali;
    cout<<"akhtar sec : "<<zain.getSec()<<endl;
}
*/
class List{
    private:
        int *data;
        int size;
    public:
        List(int size){
            this->size=size;
            data=new int[size];
        }
        List(List &obj){
            size=obj.size;
            data=new int[size];
            for(int i=0;i<size;i++){
                data[i]=obj.data[i];
            }
        }
        void fill(){
            for(int i=0;i<size;i++){
                data[i]=i*i;
            }
        }
        void update(int index,int val){
            data[index]=val;
        }
        void print(){
            for(int i=0;i<size;i++){
                cout<<data[i]<<" ";
        }
        }
        ~List(){
            delete [] data;
        }
    
};
void destroyList(List objectThree){}
int main(){
    List objectOne(5);
    objectOne.fill();
    cout<<"obj 1 : ";
    objectOne.print();

    destroyList(objectOne);

    cout<<"\n\nobj 1 : ";
    objectOne.print();
}