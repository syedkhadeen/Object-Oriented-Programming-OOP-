#include<iostream>
using namespace std;
class Book{
    protected:
        string title;
        string author;
        int year;
    public:
        Book(string title,string author,int year){
            this->title=title;
            this->author=author;
            this->year=year;
        }
        virtual void displayDetails(){
            cout<<"Title : "<<title<<endl;
            cout<<"Author : "<<author<<endl;
            cout<<"Year Published : "<<year<<endl;
        }
};
class Novel:public Book{
    private:
        string type;
    public:
        Novel(string name,string author,int year,string type):Book(name,author,year){
            this->type=type;
        }
        void displayDetails(){
            Book::displayDetails();
            cout<<"Type : "<<type<<endl;
        }
};
class Textbook:public Book{
    private:
        string subject;
    public:
        Textbook(string name,string author,int year,string subject):Book(name,author,year){
            this->subject=subject;
        }
        void displayDetails(){
            Book::displayDetails();
            cout<<"Subject : "<<subject<<endl;
        }
};
class Magazine:public Book{
    private:
        string issueNo;
    public:
        Magazine(string name,string author,int year,string issueNo):Book(name,author,year){
            this->issueNo=issueNo;
        }
        void displayDetails(){
            Book::displayDetails();
            cout<<"Issue No : "<<issueNo<<endl;
        }
};
int main(){
    Novel novel("The Great Gatsby", "F. Scott Fitzgerald", 1925, "Fiction");
    Textbook textbook("Introduction to Algorithms", "Thomas H. Cormen", 1990, "Computer Science");
    Magazine magazine("National Geographic", "Various", 1888, "December 2022");

    Book* bookptr;

    bookptr=&novel;
    bookptr->displayDetails();
    cout<<endl;
    bookptr=&textbook;
    bookptr->displayDetails();
    cout<<endl;
    bookptr=&magazine;
    bookptr->displayDetails();
    cout<<endl;
}