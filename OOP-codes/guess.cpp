#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;
int main(){
int comp_num,guess,chances=0;
srand(time(0));
comp_num=rand()%100+1;
cout<<"Guess Number Game\n\n";
do{
    cout<<"Guess the number between 1 and 100\n";
    cin>>guess;
    chances++;
    if(comp_num>guess){
        cout<<"The number you have guessed is lower. Try higher!"<<endl<<endl;
    }
    else if(comp_num<guess){
        cout<<"The number you have guessed is higher. Try lower!"<<endl<<endl;
    }
    else{
        cout<<"Congratulations! You have guessed the number in "<<chances<<" tries!"<<endl;
    }
}while(guess!=comp_num);
return 0;
}