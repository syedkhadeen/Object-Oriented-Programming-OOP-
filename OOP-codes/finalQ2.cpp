#include<iostream>
using namespace std;
class PetDatabase{
    private:
        string *PetNames;
        int *petAges;
        string *PetBreeds;
        int capacity;
        int size;
    public:
        PetDatabase(int maxcapacity):capacity(maxcapacity),size(0){
            PetNames=new string[capacity];
            petAges=new int[capacity];
            PetBreeds=new string[capacity];
        }
        ~PetDatabase(){
            delete[] petAges;
            delete[] PetNames;
            delete[] PetBreeds;
        }
        PetDatabase(PetDatabase &obj):capacity(obj.capacity),size(obj.size){
            petAges=new int[capacity];
            PetNames=new string[capacity];
            PetBreeds=new string[capacity];

            for(int i=0;i<size;i++){
                petAges[i]=obj.petAges[i];
                PetNames[i]=obj.PetNames[i];
                PetBreeds[i]=obj.PetBreeds[i];
            }
        }
        void addPet(int age,string name,string breed){
            if(size<capacity){
            petAges[size]=age;
            PetNames[size]=name;
            PetBreeds[size]=breed;
            size++;
            }
            else{
                cout<<"Database full"<<endl;
            }
        }
        void getPetInfo(string name){
            for(int i=0;i<size;i++){
                if(PetNames[i]==name){
                    cout<<"Pet age: " <<petAges[i]<<endl;
                    cout<<"Name: " <<PetNames[i]<<endl;
                    cout<<"Breed: " <<PetBreeds[i]<<endl;
                    return;
                  }
                }
                cout<<"Pet not found with name : "<<name<<endl;
            }
        void listAllPets(){
        cout<<"List of all pets:"<<endl;
        for(int i=0;i<size;i++){
            cout<<"\nPet age: "<<petAges[i]<<"\nName: "<<PetNames[i]<<"\nBreed: "<<PetBreeds[i]<<endl;
            cout<<endl<<endl;
        }
    }    
};
int main(){
 PetDatabase database(3);
 database.addPet(5, "alex", "Dog");
 database.addPet(7, "tom", "cat");
 database.addPet(3, "jerry", "mouse");
 cout<<"Pet no 1 : "<<endl;
 database.getPetInfo("alex");
 cout<<"Pet no 2 : "<<endl;
 database.getPetInfo("tom");
 cout<<"Pet no 3 : "<<endl;
 database.getPetInfo("jerry");
 cout<<"All Pets:"<<endl;
 database.listAllPets();
 PetDatabase copyOfDatabase (database);
 cout<<"All Pets in Copied Database:"<<endl;
}