#include<iostream>
using namespace std;
class Animal{
    protected:
        string name;
        int age;
        string species;
    public:
        Animal(string name,int age,string species){
            this->name=name;
            this->age=age;
            this->species=species;
        }
        void displayInfo(){
            cout<<"Name : "<<name<<", Age : "<<age<<", Species : "<<species;
        }
};
class Mammal:public Animal{
    protected:
        string furColor;
        int hungerLevel;
        bool groomed;
    public:
        Mammal(string name,int age,string furColor):Animal(name,age,"Mammal"){
            this->furColor=furColor;
            hungerLevel=0;
            groomed=false;
        }
        void setGroomed(){
            groomed=true;
            cout << name << " has been groomed.\n";
        }
        void displayInfo(){
            Animal::displayInfo();
            cout<<", Fur color : "<<furColor<<", Hunger Level : "<<hungerLevel<<", Groomed"<<(groomed ? "Yes" : "No");
        }
        void play() {
        cout << name << " is playing and its happiness level has increased.\n";
    }
        
};
class Bird:public Animal{
    protected:
        string featherColor,nestLocation,foodPreference;
    public:
        Bird(string name,int age,string featherColor):Animal(name,age,"Bird"){
            this->featherColor=featherColor;
            nestLocation="Not Build yet";
            foodPreference="seeds";
        }
        void displayInfo() {
        Animal::displayInfo();
        cout << ", Feather Color: " << featherColor << ", Nest Location: " << nestLocation << ", Food Preference: " << foodPreference;
    }

    void buildNest() {
        nestLocation = "Tree branch";
        cout << name << " has built a nest.\n";
    }
        
};
class Reptile:public Animal{
    protected:
        string scalePattern,preferredHabitat;
        int sunBathTime;
    public:
        Reptile(string name,int age,string scalePattern):Animal(name,age,"Reptile"){
            this->scalePattern=scalePattern;
            sunBathTime=0;
            preferredHabitat="Jungle";
        }
         void sunbathe() {
        sunBathTime += 1;
        cout << name << " is sunbathing.\n";
    }
};
int main(){
    Mammal lion("Leo", 5, "Golden");
    Bird eagle("Eddie", 3, "Brown");
    Reptile snake("Sammy", 2, "Striped");

    // Displaying initial information
    cout << "Initial Animal Information:\n";
    lion.displayInfo();
    cout << endl;
    eagle.displayInfo();
    cout << endl;
    snake.displayInfo();
    cout << endl;

    // Simulating daily zoo activities
    cout << "Simulating Daily Zoo Activities:\n";
    lion.setGroomed();
    lion.play();
    eagle.buildNest();
    snake.sunbathe();

    // Displaying updated information
    cout << "\nUpdated Animal Information:\n";
    lion.displayInfo();
    cout << endl;
    eagle.displayInfo();
    cout << endl;
    snake.displayInfo();
    cout << endl;

}