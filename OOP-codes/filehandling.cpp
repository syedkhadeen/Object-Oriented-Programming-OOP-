#include <iostream>
#include<fstream>
using namespace std;
int main(){
    string line;
    //the class will write data into the file
    ofstream fout;   //ofsteam    'o' stands for output
    fout.open("sectionG.txt");
    while(true){
        cout<<"Please enter anything : "<<endl;
        getline(cin,line);
        if(line!="-1"){
            fout<<line<<endl;
        }
        else{
        break;
        }
    }
    fout.close();
    // ifstream class is used for data reading
    ifstream ifn;     //ifstream reads data from file
    ifn.open("sectionG.txt");
    while(getline(ifn,line)){
        cout<<line<<endl;
    }
     ifn.close();
}